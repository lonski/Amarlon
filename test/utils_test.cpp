#include <gtest/gtest.h>
#include <utils/utils.h>
#include <tile_db.h>
#include <dices.h>
#include <set>
#include <thread>
#include <experience_table.h>
#include <damage.h>
#include <actor_container.h>
#include <engine.h>
#include <actor_db.h>
#include <actor.h>

namespace amarlon {

TEST(DamageTest, operators)
{
  Damage d1("1d4+1#1");
  Damage d2("1d6+1#1");

  EXPECT_TRUE( d1 < d2 );
  EXPECT_TRUE( d1.toInt() < d2.toInt() ) << "D1: " << d1.toInt() << " D2: " << d2.toInt();

  EXPECT_TRUE( d2 > d1 );
  EXPECT_TRUE( d2.toInt() > d1.toInt() );
}

TEST(PointTest, operator_minus)
{
  Point p1(10, 5);
  Point p2(2, 1);
  Point dp = p1 - p2;
  EXPECT_EQ(dp.x, p1.x - p2.x);
  EXPECT_EQ(dp.y, p1.y - p2.y);
}

TEST(ActorContainerTest, removeStacked)
{
  Engine::instance().prologue();

  //create 10 arrows
  ActorPtr arrows = Engine::instance().getActorDB().fetch(ActorType::Arrow);
  PickablePtr p = arrows->getFeature<Pickable>();
  p->setAmount(10);

  //create container
  ActorContainer container;

  //add arrows to container
  container.push_back(arrows);

  EXPECT_EQ(container.size(), (size_t)1 );

  //remove 1 arrow
  container.remove( p->spilt(9) );

  EXPECT_EQ(container.size(), (size_t)1 );

  container.remove( p->spilt(1) );
  EXPECT_EQ(container.size(), (size_t)0 );
}

TEST(DamageTest, parseValid)
{
  std::string str("3d4+2#3");
  Damage dmg(str);

  ASSERT_EQ(dmg.value, 2);
  ASSERT_EQ(dmg.dice, dices::D4);
  ASSERT_EQ(dmg.diceCount, 3);
  ASSERT_EQ(dmg.type, DamageType::Fire );
}

TEST(DamageTest, parseInvalid)
{
  std::string str("3d4#3");
  Damage dmg(str);

  ASSERT_EQ(dmg, Damage());
}

TEST(DamageTest, serialize)
{
  Damage d(4, 2, dices::D6, DamageType::Lighting);
  ASSERT_EQ( "2d6+4#5", std::string(d) );
}

TEST(ExpDataTable, get)
{
  Experience::getLevelData(CharacterClassType::Fighter, 1);
}

TEST(UtilsTest, color2str)
{
  TCODColor color(255,0,0);
  std::string s = colorToStr(color);

  ASSERT_EQ(s, "ff0000");
}

TEST(UtilsTest, str2color)
{
  std::string s = "0910FF";

  TCODColor col = strToColor(s);

  EXPECT_EQ((int)col.r, (int)0x09);
  EXPECT_EQ((int)col.g, (int)0x10);
  EXPECT_EQ((int)col.b, (int)0xFF);
}

TEST(UtilsTest, loadTiles)
{
  TileDB tiles;
  tiles.load("data/tiles.xml");
}

TEST(UtilsTest, tolowers)
{
  std::string str = "Cycki";
  ASSERT_EQ(tolowers(str), "cycki");
}

TEST(UtilsTest, diceTest)
{
  std::set<int> rolls;
  for(int i=0; i<100; ++i)
  {
    int r = dices::roll(dices::D4);
    rolls.insert( r );
  }

  for ( int i=1; i<=4; ++i)
  {
    EXPECT_TRUE( rolls.find(i) != rolls.end() ) << i;
  }
}

}


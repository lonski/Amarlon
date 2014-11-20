#include "single_neighbour_selector.h"
#include <utils/direction_selector.h>
#include <world/map.h>
#include <Actor/Actor.h>
#include <engine.h>
#include <gui/gui.h>

namespace amarlon {

SingleNeighbourSelector::SingleNeighbourSelector(const std::string& selectionMessage)
  : TargetSelector(selectionMessage)
{
}

std::vector<Actor*> SingleNeighbourSelector::select(bool (*filterFun)(Actor *))
{
  Engine::instance().gui().setStatusMessage( _selectionMessage );
  Map& map = Engine::instance().currentMap();
  Actor* player = Actor::Player;

  int dx(0), dy(0);

  DirectionSelector dSelector;
  dSelector.select(dx, dy);

  Engine::instance().gui().clearStatusMessage();
  Engine::instance().render();

  return map.getActors(player->getX()+dx, player->getY()+dy, filterFun);
}

Actor *SingleNeighbourSelector::selectFirst(bool (*filterFun)(Actor *))
{
  std::vector<Actor*> targets = select(filterFun);
  return targets.empty() ? nullptr : targets.front();
}

}

#include <engine.h>
#include <algorithm>
#include <map.h>
#include <actor.h>
#include <gui.h>
#include <spell.h>
#include <utils/configuration.h>
#include <utils/messenger.h>
#include <spell_gateway.h>
#include <world.h>
#include <command_executor.h>
#include <tile_db.h>
#include <actor_db.h>

namespace amarlon {

int Engine::FovRadius = 20;
int Engine::consoleWidth = 100;
int Engine::consoleHeight = 60;
int Engine::rightPanelWidth = 20;
int Engine::bottomPanelHeight = 15;
int Engine::screenWidth = 100 + Engine::rightPanelWidth;
int Engine::screenHeight = 60 + Engine::bottomPanelHeight;

Engine::Engine()
  : _config(nullptr)
  , _spellGateway(new SpellGateway )
  , _tileDB( new TileDB )
  , _actorsDB( new ActorDB )
{
}

Engine::~Engine()
{  
}

void Engine::prologue(Configuration* cfg)
{
  _config = cfg;
  _cmdExecutor.reset( new CommandExecutor );
  _windowManager.reset( new gui::WindowManager );
  _gui.reset( new gui::Gui );

  Engine::consoleWidth      = std::stol( _config->get("console_width") );
  Engine::consoleHeight     = std::stol( _config->get("console_height") );
  Engine::rightPanelWidth   = std::stol( _config->get("right_panel_width") );
  Engine::bottomPanelHeight = std::stol( _config->get("bottom_panel_height") );;
  Engine::screenWidth       = Engine::consoleWidth + Engine::rightPanelWidth;
  Engine::screenHeight      = Engine::consoleHeight + Engine::bottomPanelHeight;

  getActorDB()     .load( cfg->get("actors_file") );
  getTileDB ()     .load( cfg->get("tiles_file" ) );
  getSpellGateway().load( cfg->get("spells_file") );

  initializeWorld();
  Messenger::message()->setGui(_gui.get());

  //temporary solution
  _player = getWorld().getCurrentMap()->getActors([](ActorPtr a){ return a->getId() == ActorType::Player; }).front();
}

void Engine::initializeWorld()
{
  assert(_config);

  MapGatewayPtr mapGateway( new MapGateway );
  mapGateway->load( _config->get("maps_file") );

  _world.reset( new World(mapGateway) );
  _world->load( _config->get("save_file") );
  _world->changeMap( MapId::GameStart );
}

void Engine::epilogue()
{
  getWorld().store( _config->get("save_file") );
}

void Engine::update()
{
  updateAis();
}

void Engine::render()
{
  TCODConsole::root->clear();
  MapPtr map = getWorld().getCurrentMap();

  if ( map )
  {
    map->computeFov(_player->getX(), _player->getY(), FovRadius);
    map->render(TCODConsole::root);
  }

  if (_gui)
  {
    _gui->setPlayerName(_player->getName());

    if ( _player->isAlive() )
      _gui->setHpBar(_player->getFeature<Character>()->getHitPoints(), _player->getFeature<Character>()->getMaxHitPoints());

    _gui->setViewList(getActorsBenethPlayersFeet());
    _gui->render();
  }

  TCODConsole::root->putChar(_player->getX(), _player->getY(), _player->getChar());
  TCODConsole::root->setCharForeground(_player->getX(), _player->getY(), _player->getColor());
}

void Engine::updateAis()
{
  MapPtr map = getWorld().getCurrentMap();
  if ( map )
  {    
    std::function<bool(ActorPtr)> filter = [](ActorPtr a)->bool{ return a->hasFeature<Ai>();};    
    auto ais = map->getActors( filter );
    for ( ActorPtr actor : ais )
    {
      actor->getFeature<Ai>()->update();
    }
  }
}

void Engine::processInput(TCOD_key_t &key)
{
  _cmdExecutor->execute(key);
}

gui::Gui& Engine::getGui() const
{
  return *_gui;
}

gui::WindowManager& Engine::getWindowManager() const
{
  return *_windowManager;
}

World& Engine::getWorld() const
{
  return *_world;
}

SpellGateway& Engine::getSpellGateway() const
{
  return *_spellGateway;
}

ActorPtr Engine::getPlayer() const
{
  return _player;
}

TileDB &Engine::getTileDB() const
{
  return *_tileDB;
}

ActorDB &Engine::getActorDB() const
{
  return *_actorsDB;
}

std::vector<ColoredString> Engine::getActorsBenethPlayersFeet()
{
  std::vector< ColoredString > items;
  MapPtr map = getWorld().getCurrentMap();

  if ( map )
  {
    std::function<bool(amarlon::ActorPtr)> filterFun = [&](ActorPtr a) -> bool
    {
      return a != _player;
    };

    std::vector<ActorPtr> actorsOnTile = map->getActors(_player->getX(), _player->getY(), filterFun);

    for ( ActorPtr actor : actorsOnTile )
    {
      std::string msg = actor->getName();

      PickablePtr pickable = actor->getFeature<Pickable>();
      if ( pickable && pickable->getAmount() > 1 )
      {
        msg = msg + " (" + std::to_string(pickable->getAmount()) + ")";
      }

      items.push_back( ColoredString( msg, TCODColor::darkLime ) );
    }
  }

  return items;
}

}

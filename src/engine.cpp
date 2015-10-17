#include <engine.h>
#include <algorithm>
#include <map.h>
#include <actor.h>
#include <gui.h>
#include <spell.h>
#include <configuration.h>
#include <messenger.h>
#include <spell_db.h>
#include <world.h>
#include <command_executor.h>
#include <tile_db.h>
#include <actor_db.h>
#include <lua_state.h>
#include <window/game_menu_window.h>
#include <status_effects_manager.h>

namespace amarlon {

int Engine::FovRadius = 20;
int Engine::consoleWidth = 100;
int Engine::consoleHeight = 60;
int Engine::rightPanelWidth = 20;
int Engine::bottomPanelHeight = 15;
int Engine::screenWidth = 100 + Engine::rightPanelWidth;
int Engine::screenHeight = 60 + Engine::bottomPanelHeight;

Engine::Engine()
  : _quit(false)
  , _running(false)
{
}

Engine::~Engine()
{  
}

void Engine::prologue()
{
  _windowManager.reset( new gui::WindowManager );

  _config.reset( new Configuration );
  _config->load("config.cfg");

  _gui.reset( new gui::Gui );
  _cmdExecutor.reset( new CommandExecutor );

  _spellDB.reset(new SpellDB );
  _tileDB.reset( new TileDB );
  _actorsDB.reset( new ActorDB );
  _messenger.reset( new Messenger( _gui ) );
  _luaState.reset( new lua_api::LuaState );

  getSpellDB().load( _config->get("spells_file") );
  getTileDB ().load( _config->get("tiles_file" ) );
  getActorDB().load( _config->get("actors_file") );
  _world.reset( new World( _config->get("maps_file") ) );

  getLuaState().registerAPI();
}

void Engine::enterGame(const std::string& savedGameFn)
{
  if ( savedGameFn.empty() )
  {
    _world->changeMap( MapId::GameStart );
    _world->setPlayer( Actor::create(ActorType::Player, 42, 28) );
  }
  else
  {
    _world->load(savedGameFn);
  }

  _running = true;

  getGui().clearLog();
  getGui().message(":: Welcome to Amarlon! ::", TCODColor::sky);
}

void Engine::showGameMenu()
{
  _windowManager->getWindow<gui::GameMenu>().show();
}

void Engine::quit()
{
  _quit = true;
}

bool Engine::isQuiting() const
{
  return _quit;
}

bool Engine::isRunning() const
{
  return _running;
}

void Engine::initializeConsole()
{
  TCODConsole::root->setCustomFont(_config->getFont(),TCOD_FONT_LAYOUT_TCOD | TCOD_FONT_TYPE_GREYSCALE);
  TCODConsole::initRoot(Engine::screenWidth, Engine::screenHeight, "Amarlon", false, TCOD_RENDERER_SDL);
  TCODConsole::root->setFullscreen( std::stol(_config->get("fullscreen")) );
  TCODMouse::showCursor(true);

  Engine::consoleWidth      = std::stol( _config->get("console_width") );
  Engine::consoleHeight     = std::stol( _config->get("console_height") );
  Engine::rightPanelWidth   = std::stol( _config->get("right_panel_width") );
  Engine::bottomPanelHeight = std::stol( _config->get("bottom_panel_height") );;
  Engine::screenWidth       = Engine::consoleWidth + Engine::rightPanelWidth;
  Engine::screenHeight      = Engine::consoleHeight + Engine::bottomPanelHeight;
}

void Engine::epilogue()
{
  _gui.reset();
  _cmdExecutor.reset();
  _windowManager.reset();
  _config.reset();
  _spellDB.reset();
  _tileDB.reset();
  _actorsDB.reset();
  _messenger.reset();
  _luaState.reset();

  _running = false;
}

void Engine::render()
{
  TCODConsole::root->clear();
  MapPtr map = getWorld().getCurrentMap();

  if ( map )
  {
    map->computeFov(getPlayer()->getX(), getPlayer()->getY(), FovRadius);
    map->render(TCODConsole::root);
  }

  if (_gui)
  {
    if ( getPlayer()->isAlive() )
    {
      _gui->setPlayerName(getPlayer()->getName());
      _gui->setHpBar(getPlayer()->getFeature<Character>()->getHitPoints(), getPlayer()->getFeature<Character>()->getMaxHitPoints());
      _gui->setViewList(getActorsBenethPlayersFeet());
      _gui->setEffectsList( getPlayer()->getStatusEffects().getEffectsStringList() );
    }
    _gui->render();
  }
}

void Engine::update()
{
  MapPtr map = getWorld().getCurrentMap();
  if ( map )
  {
    for ( auto actor : map->getActors() )
    {
      actor->update();
    }
  }
}

int Engine::processInput()
{
  TCOD_key_t key;
  TCODSystem::waitForEvent(TCOD_EVENT_KEY_PRESS,&key,NULL, true);
  return _cmdExecutor->execute(key);
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

SpellDB& Engine::getSpellDB() const
{
  return *_spellDB;
}

Messenger &Engine::getMessenger() const
{
  return *_messenger;
}

lua_api::LuaState &Engine::getLuaState() const
{
  return *_luaState;
}

const ActorPtr Engine::getPlayer() const
{
  return getWorld().getPlayer();
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
      return a != getPlayer();
    };

    std::vector<ActorPtr> actorsOnTile = map->getActors(getPlayer()->getX(), getPlayer()->getY(), filterFun);

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


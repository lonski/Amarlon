#include <engine.h>
#include <algorithm>
#include <map.h>
#include <actor.h>
#include <gui.h>
#include <utils/configuration.h>
#include <utils/messenger.h>


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
{
}

Engine::~Engine()
{
}

void Engine::init(Configuration* cfg)
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

  Map::Tiles.loadTiles( cfg->get("tiles_file") );
  Actor::DB.loadActors( cfg->get("actors_file") );
  Map::Gateway.loadMaps( cfg->get("maps_file") );

  Actor::Player = Actor::create(ActorType::Player, 42, 28);

  Messenger::message()->setGui(_gui.get());

  setCurrentMap( Map::Gateway.fetch(MapId::GameStart) );
}

void Engine::update()
{
  updateAis();
}

void Engine::render()
{
  TCODConsole::root->clear();
  if (_currentMap != nullptr)
  {
    _currentMap->computeFov(Actor::Player->getX(), Actor::Player->getY(), FovRadius);
    _currentMap->render(TCODConsole::root);
  }

  if (_gui)
  {
    _gui->setPlayerName(Actor::Player->getName());

    if ( Actor::Player->isAlive() )
      _gui->setHpBar(Actor::Player->getFeature<Fighter>()->getHp(), Actor::Player->getFeature<Fighter>()->getMaxHp());

    _gui->setViewList(getActorsBenethPlayersFeet());
    _gui->render();
  }

  TCODConsole::root->putChar(Actor::Player->getX(), Actor::Player->getY(), Actor::Player->getChar());
  TCODConsole::root->setCharForeground(Actor::Player->getX(), Actor::Player->getY(), Actor::Player->getColor());
}

void Engine::updateAis()
{
  if (_currentMap != nullptr)
  {
    std::function<bool(ActorPtr)> filter = [](ActorPtr a)->bool{ return a->hasFeature<Ai>();};
    std::vector<ActorPtr> ais = currentMap()->getActors( &filter );

    std::for_each( ais.begin(), ais.end(), [&](ActorPtr a){a->getFeature<Ai>()->update( currentMap() );});
  }
}

void Engine::processKey(TCOD_key_t &key)
{
  _cmdExecutor->execute(key);
}

MapPtr Engine::currentMap() const
{
  assert(_currentMap != nullptr);
  return _currentMap;
}

void Engine::setCurrentMap(MapPtr currentMap)
{
  _currentMap = currentMap;
}

gui::Gui& Engine::gui() const
{
  return *_gui;
}

gui::WindowManager& Engine::windowManager() const
{
  return *_windowManager;
}

std::vector<ColoredString> Engine::getActorsBenethPlayersFeet()
{
  std::function<bool(amarlon::ActorPtr)> filterFun = [&](ActorPtr a) -> bool
  {
    return a != Actor::Player;
  };
  std::vector<ActorPtr> actorsOnTile = _currentMap->getActors(Actor::Player->getX(),
    Actor::Player->getY(), &filterFun);

  TCODColor itemViewColor = TCODColor::darkLime;
  std::vector< ColoredString > items;

  std::for_each(actorsOnTile.begin(), actorsOnTile.end(), [&](ActorPtr a)
  {
    int amount = 1;
    if ( a->hasFeature<Pickable>() )
    {
      amount = a->getFeature<Pickable>()->getAmount();
    }

    std::string entryMsg = a->getName();

    if (amount > 1)
      entryMsg = entryMsg + " (" + std::to_string(amount) + ")";

    items.push_back( ColoredString( entryMsg, itemViewColor ) );
  });

  return items;
}

}

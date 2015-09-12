#include "single_range_selector.h"
#include <cmath>
#include "engine.h"
#include "world/map.h"
#include "gui/gui.h"
#include "utils.h"
#include "actor/actor.h"

namespace amarlon {

SingleRangeSelector::SingleRangeSelector(const std::string &selectionMessage)
    : TargetSelector(selectionMessage)
{
    initValues();
}

void SingleRangeSelector::initValues()
{
    _dx = 0;
    _dy = 0;
    _x = Engine::instance().getPlayer()->getX();
    _y = Engine::instance().getPlayer()->getY();
}

Target SingleRangeSelector::select(std::function<bool (amarlon::ActorPtr)> filterFun)
{
    initValues();

    bool accepted = false;
    TCOD_key_t key;
    Target target;
    MapPtr map = Engine::instance().getPlayer()->getMap();
    render();

    if ( map )
    {
      while ( key.vk != TCODK_ESCAPE && !accepted )
      {
          Engine::instance().getGui().setStatusMessage( _selectionMessage );
          TCODSystem::waitForEvent(TCOD_KEY_PRESSED, &key, NULL, true);

          int dx_tmp(0), dy_tmp(0);
          handleDirectionKey(key, dx_tmp, dy_tmp);

          int calculatedRange = round( sqrt( pow(_dx+dx_tmp,2) + pow(_dy+dy_tmp,2)) );
          if ( calculatedRange <= getRange() && map->isInFov(_x + _dx + dx_tmp, _y + _dy + dy_tmp) )
          {
              _dx += dx_tmp;
              _dy += dy_tmp;
              if ( _updateFunction != nullptr) _updateFunction();
          }

          render();
          if ( key.vk == TCODK_ENTER || key.vk == TCODK_KPENTER )
          {
            target.x = _x+_dx;
            target.y = _y+_dy;
            target.actors = map->getActors(target.x, target.y, filterFun);
            accepted = true;
          }
      }
    }

    return target;
}

void SingleRangeSelector::render()
{
    Engine::instance().render();
    highlightCurrentTile();
    TCODConsole::root->flush();
}

void SingleRangeSelector::highlightCurrentTile()
{
    TCODColor fgcol = TCODConsole::root->getCharForeground(_x+_dx, _y+_dy);
    TCODColor bgcol = TCODConsole::root->getCharBackground(_x+_dx, _y+_dy);
    TCODConsole::root->setCharForeground(_x+_dx, _y+_dy, TCODColor::lerp(fgcol, TCODColor::yellow, 0.6));
    TCODConsole::root->setCharBackground(_x+_dx, _y+_dy, TCODColor::lerp(bgcol, TCODColor::yellow, 0.1));
}

}

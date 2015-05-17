#include "cmd_use.h"
#include <functional>
#include "utils/selector_type.h"
#include "utils/target_selector/target_selector.h"
#include "utils/direction_selector.h"
#include "utils/messenger.h"
#include "actor/effects/effect.h"
#include "engine.h"
#include "gui/gui.h"
#include "gui/widgets/alabel_menu_item.h"
#include "gui/message_box.h"
#include <menu_window.h>

namespace amarlon {

CmdUse::CmdUse()
{
}

bool CmdUse::accept(TCOD_key_t &key)
{
  return ( key.vk == TCODK_CHAR && key.c == 'u' );
}

void CmdUse::execute()
{  
  ActorPtr item = acquireItemToUse();

  Engine::instance().render();

  if (item != nullptr && item->getFeature<Pickable>()->getEffect() != nullptr)
  {
    TargetSelector& tSelector = item->getFeature<Pickable>()->getEffect()->getTargetSelector();

    std::vector<ActorPtr> targets = tSelector.select();
    PickablePtr toUse = item->getFeature<Pickable>();

    if ( toUse->use( Actor::Player, targets ) && toUse->getUsesCount() == 0)
    {
      ActorPtr toRemove = item->getFeature<Pickable>()->spilt(1);
      Actor::Player->getFeature<Container>()->remove( toRemove );
    }
  }
  else if ( item )
  {
    gui::msgBox(item->getName() + " is not usable.", gui::MsgType::Warning);
  }

}

ActorPtr CmdUse::acquireItemToUse()
{
  ActorPtr item ;

  gui::MenuWindow& window = Engine::instance().windowManager().getWindow<gui::MenuWindow>();
                   window . setPosition(gui::AWidget::GAME_SCREEN_CENTER);
                   window . setTitle("Choose item to use");

  auto usableItems = getUsableItems();
  if ( !usableItems.empty() )
  {
    window.fill<Actor>( usableItems, [](ActorPtr a){ return a->getName(); } );
    window.show();
    if ( auto selected = window.getSelectedItem() )
    {
      item = selected->getObject<Actor>();
    }
  }
  else gui::msgBox("You don't have any usable items!", gui::MsgType::Warning);

  if ( item != nullptr && item->getFeature<Pickable>()->isStackable() ) item = item->getFeature<Pickable>()->spilt(1);

  return item;
}

std::vector<ActorPtr> CmdUse::getUsableItems()
{
  std::function<bool(ActorPtr)> filter = [](ActorPtr a)
                                         {
                                           return a->getFeature<Pickable>() && a->getFeature<Pickable>()->getEffect();
                                         };

  return Actor::Player->getFeature<Container>()->content(&filter);
}

}

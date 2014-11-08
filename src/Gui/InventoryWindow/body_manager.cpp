#include "body_manager.h"
#include <Actor/Actor.h>
#include <Gui/Widget/menu/menu_item.h>
#include <Gui/Widget/menu/slot_menu_item.h>
#include <Gui/Widget/menu/label_menu_item.h>
#include <Gui/message_box.h>
#include <Gui/Widget/menu/items_menu.h>

namespace amarlon { namespace gui {

BodyManager::BodyManager(MenuPtr bodyMenu)
  : _bodyMenu(bodyMenu)
{
}

void BodyManager::fillBodySlots()
{
  int currentIndex = _bodyMenu->getCurrentIndex();
  _bodyMenu->clear();

  Wearer* wearer = Actor::Player->afWearer();
  assert(wearer);

  for( int i = (int)ItemSlotType::Null + 1; i != (int)ItemSlotType::End; ++i)
  {
    ItemSlotType slot = static_cast<ItemSlotType>(i);
    if ( wearer->hasSlot(slot) )
    {
      Actor* eq = wearer->equipped(slot);

      std::string slotValue = eq ? eq->getName() : "";
      std::string slotName = ItemSlotType2Str(i);

      SlotMenuItemPtr newSlot( new SlotMenuItem( _bodyMenu->getWidth() - 4 ) );
      newSlot->setSlotName( slotName );
      newSlot->setValue( slotValue );
      newSlot->setTag( "id", std::to_string(i) );

      _bodyMenu->addItem( newSlot );
    }
  }

  if ( currentIndex > -1 ) _bodyMenu->select(currentIndex);

}

void BodyManager::manage()
{
  ItemSlotType slot = (ItemSlotType)std::stol( _bodyMenu->getSelectedItem()->getTag("id") );

  if ( Actor::Player->afWearer()->isEquipped( slot ) )
  {
    unequipItem(slot);
  }
  else
  {
    chooseAndEquipItem(slot);
  }

  fillBodySlots();
}

// === UNEQUIP === //
void BodyManager::unequipItem(ItemSlotType slot)
{
  Wearer* playerWearer = Actor::Player->afWearer();
  Container* playerContainer = Actor::Player->afContainer();

  if ( Actor* item = playerWearer->unequip( slot ) )
  {
    clearSelectedItemSlotValue();

    if ( !playerContainer->add(item) )
    {
      msgError("Item cannot be unequipped:\nNot enough space in inventory");
      playerWearer->equip(item);
    }
  }
  else
  {
    msgError("Item cannot be unequipped!");
  }
}

void BodyManager::clearSelectedItemSlotValue()
{
  MenuItemPtr menuItem = _bodyMenu->getSelectedItem();
  SlotMenuItemPtr slotMenuItem = std::dynamic_pointer_cast<SlotMenuItem>( menuItem );

  slotMenuItem->setValue("");
}
// ~~~ UNEQUIP ~~~ //

// === EQUIP === //
void BodyManager::chooseAndEquipItem(ItemSlotType slot)
{
  std::vector<Actor*> equipableItems = getEquipableItemsList(slot);

  if ( !equipableItems.empty() )
  {
    ItemsMenu equipMenu;
    equipMenu.setTitle("Choose item to equip");
    equipMenu.setShowCategories(false);
    equipMenu.centerPosition();

    std::map<int, Actor*> mappedItems = equipMenu.fillWithItems<LabelMenuItem>( equipableItems );

    equipMenu.selectNext(); //activate first menu option

    auto found = mappedItems.find( equipMenu.choose( *TCODConsole::root ) );

    if ( found != mappedItems.end() ) equipItem(found->second);
  }
  else
  {
    msgError("You don't have any item, that fit this slot.");
  }

}

void BodyManager::equipItem(Actor* toEquip)
{
  if (Actor::Player->afContainer()->remove( toEquip ))
  {
    if ( !Actor::Player->afWearer()->equip( toEquip ) )
    {
      msgError( "Cannot equip item!" );
      Actor::Player->afContainer()->add( toEquip );
    }
  }
  else
  {
    msgError( "Cannot remove item from inventory!" );
  }
}

std::vector<Actor *> BodyManager::getEquipableItemsList(ItemSlotType slot)
{
  std::function<bool(Actor*)> filterFun = [&](Actor* a)-> bool
  {
    return a->afPickable() && a->afPickable()->getItemSlot() == slot;
  };

  return Actor::Player->afContainer()->content( &filterFun );
}
// ~~~ EQUIP ~~~ //

}}
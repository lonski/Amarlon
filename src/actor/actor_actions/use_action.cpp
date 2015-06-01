#include "use_action.h"
#include <actor.h>

namespace amarlon {

UseAction::UseAction(std::vector<ActorPtr> targets, ActorPtr toUse)
  : _targets(targets)
  , _toUse(toUse)
{
}

UseAction::~UseAction()
{
}

bool UseAction::perform(ActorPtr performer)
{
  bool used = false;
  _performer = performer;

  PickablePtr pickable = _toUse->getFeature<Pickable>();
  if ( pickable != nullptr && pickable->use( _performer, _targets ) )
  {
    if ( pickable->getUsesCount() == 0 )
    {
      removeUsedItemFromInventory();
    }

    used = true;
  }

  return used;
}

void UseAction::removeUsedItemFromInventory()
{
  PickablePtr pickable = _toUse->getFeature<Pickable>();
  ContainerPtr container = _performer->getFeature<Container>();

  if ( pickable && container )
  {
    ActorPtr toRemove = pickable->spilt(1);
    container->remove( toRemove );
  }
}

ActorActionUPtr UseAction::clone()
{
  UseActionUPtr cloned = std::make_unique<UseAction>(_targets, _toUse);
  cloned->_performer = _performer;

  return std::move(cloned);
}

}
#ifndef PICKUP_ACTION_H
#define PICKUP_ACTION_H

#include <memory>
#include <actor_action.h>

namespace amarlon{

class Container;
typedef std::shared_ptr<Container> ContainerPtr;

class PickUpAction : public ActorAction
{
public:
  /**
   * @brief Makes actor pick up an item, and put it into inventory.
   * @param toPick - actor to be picked up
   * @param amount - usable if item is stackable, if not provided then max amount is picked up
   * @param sourceContainer - container to remove the item from, after successfull picking it up
   */
  PickUpAction(ActorPtr toPick, int amount = -1, ContainerPtr sourceContainer = nullptr);
  virtual ~PickUpAction();

  /**
   * @return True if picked up successfully. If performer has no container, or there is
   *         no space left, then false.
   */
  virtual bool perform(ActorPtr performer);
  virtual ActorActionUPtr clone();

private:
  ActorPtr _toPick;
  int _amount;
  ContainerPtr _sourceContainer;
  ActorPtr _performer;

  bool pickUpAll();
  bool pickUpAmount();

};

typedef std::shared_ptr<PickUpAction> PickUpActionPtr;
typedef std::unique_ptr<PickUpAction> PickUpActionUPtr;

}

#endif // PICKUP_ACTION_H
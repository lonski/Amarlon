#ifndef MESSENGER_H
#define MESSENGER_H

#include <string>
#include <memory>

namespace amarlon {

namespace gui {
  class Gui;
}
class Actor;
typedef std::shared_ptr<Actor> ActorPtr;

class Messenger
{
public:
  static Messenger* message();

  void setGui(gui::Gui* gui);

  void actorHit(ActorPtr atacker, ActorPtr victim, int amount);
  void actorDies(ActorPtr victim);
  void actorPicked(ActorPtr picker, ActorPtr picked, int amount);
  void actorPicked(const std::string& pickerName, const std::string& itemName, int amount, const std::string& from = "");
  void actorDropped(ActorPtr dropper, ActorPtr dropped, int amount);
  void actorHealed(ActorPtr healed, int amount);
  void actorHasBeenLocked(ActorPtr locker, ActorPtr locked);
  void actorHasBeenUnLocked(ActorPtr unlocker, ActorPtr unlocked);
  void actorPutInto(const std::string& putterName, const std::string& container, const std::string& itemName, int amount);

private:
  Messenger();
  Messenger& operator=(const Messenger&);

  static Messenger* _msg;
  gui::Gui* _gui;

};

}

#endif // MESSENGER_H

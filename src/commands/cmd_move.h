#ifndef CMDMOVE_H
#define CMDMOVE_H

#include "command.h"

namespace amarlon {

class CmdMoveOrAttack : public Command
{
public:
  CmdMoveOrAttack();
  virtual bool accept(TCOD_key_t &key);
  virtual void execute();

  virtual void setDirection(int dx, int dy);

private:
  int _dx;
  int _dy;

  ActorPtr getActorToAttack();
};

}

#endif // CMDMOVE_H

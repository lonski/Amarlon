#include "Attacker.h"
#include "Actor/Actor.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Gui/Gui.h"
#include "Utils/Utils.h"

Attacker::Attacker(float power)
  : _owner(nullptr)
  , _power(power)
{
}

void Attacker::setOwner(Actor *owner)
{
  _owner = owner;
}

void Attacker::attack(Actor *enemy)
{
  if ( enemy->isAlive() )
  {
    std::string enemyName = enemy->getName() == "Player" ? "you" : enemy->getName();
    std::string atackerName = _owner->getName() == "Player" ? "You" : _owner->getName();

    Gui::Root.message(atackerName + " hit " + enemyName + " for " + to_stringp(_power) + "hp!", TCODColor::red);
    enemy->afDestrucible()->takeDamage(_power);

  }
}

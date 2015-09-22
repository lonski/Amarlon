#ifndef EFFECTTYPE_H
#define EFFECTTYPE_H

namespace amarlon {

enum class EffectType
{
  Null        = 0,
  Lock        = 1,
  Heal        = 2,
  Damage      = 3,
  AttackRoll  = 4,
  SavingThrow = 5,
  Morale      = 6
};

}

#endif // EFFECTTYPE_H

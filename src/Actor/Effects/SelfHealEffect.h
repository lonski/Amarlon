#ifndef HEALEFFECT_H
#define HEALEFFECT_H

#include "Effect.h"

class SelfHealEffect : public Effect
{
public:
  SelfHealEffect();

  virtual Effect* clone();
  virtual bool isEqual(Effect *rhs);

  virtual bool apply(Actor* executor, std::vector<Actor*> targets);
  virtual void load(const EffectDescription& dsc);
  virtual EffectDescription save();

  virtual SelectorType getSelectorType()
  {
    return SelectorType::Executor;
  }

private:
  int _healAmount;

};

#endif // HEALEFFECT_H

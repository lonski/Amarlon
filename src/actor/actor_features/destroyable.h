#ifndef DESTROYABLE_H
#define DESTROYABLE_H

#include <memory>
#include <vector>
#include <actor_feature.h>
#include <drop_rule.h>

namespace amarlon {

class Destroyable;
typedef std::shared_ptr<Destroyable> DestroyablePtr;

class Destroyable : public ActorFeature
{
public:
  const static ActorFeature::Type featureType;

  static DestroyablePtr create(DescriptionPtr dsc);

  virtual ActorFeaturePtr clone();
  virtual bool isEqual(ActorFeaturePtr rhs);
  virtual ActorFeature::Type getType();

  void destroy();
  const std::vector<DropRule> getDropRules() const;

  Destroyable();
  ~Destroyable();

private:
  std::vector<DropRule> _dropRules;

  void dropInventory();
  void dropOnGround(ActorPtr item);
  void processDropRules();

};

}

#endif // DESTROYABLE_H

#include "actor_feature.h"
#include <ai.h>
#include <openable.h>
#include <wearer.h>
#include <character.h>
#include <pickable.h>
#include <destroyable.h>
#include <inventory.h>
#include <actor.h>

namespace amarlon {

ActorFeature::ActorFeature()  
{
}

ActorFeaturePtr ActorFeature::create(Type featureType, DescriptionPtr dsc)
{
  ActorFeaturePtr feature = nullptr;

  if ( dsc)
  {
    switch( featureType )
    {
      case AI: feature = Ai::create(dsc); break;
      case OPENABLE: feature = Openable::create(dsc); break;
      case WEARER: feature = Wearer::create(dsc); break;
      case INVENTORY: feature = Inventory::create(dsc); break;
      case CHARACTER: feature = Character::create(dsc); break;
      case PICKABLE: feature = Pickable::create(dsc); break;
      case DESTROYABLE: feature = Destroyable::create(dsc); break;
      default:;
    }
  }

  return feature;
}

ActorFeature::~ActorFeature()
{
}

void ActorFeature::setOwner(ActorWPtr owner)
{
  _owner = owner;
}

ActorWPtr ActorFeature::getOwner()
{
  return _owner;
}

std::string ActorFeature::getDescription()
{
  return "";
}

}

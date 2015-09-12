#ifndef SELECTORTYPE_H
#define SELECTORTYPE_H

namespace amarlon {

enum class TargetType
{
  SINGLE_NEIGHBOUR        = 0, //single target in neighbouring tile
  SINGLE_RANGE            = 1, //single target in any tile
  AREA_RANGE              = 2, //multiple targets in circle with its center at any tile
  AREA_NEIGHBOUR          = 3, //multiple targets in circle with its center at neighbouring tile
  SELF                    = 4, //the actor who uses the effect
  SINGLE_RANGE_PROJECTILE = 5  //single target in tile, path of projectile is drawn
};

}

#endif // SELECTORTYPE_H

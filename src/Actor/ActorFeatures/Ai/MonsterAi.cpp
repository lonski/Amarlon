#include "MonsterAi.h"
#include <iostream>
#include "World/Map.h"
#include "Actor/Actor.h"
#include <cmath>

int MonsterAi::TrackingTurns = 5;

MonsterAi::MonsterAi()
  : _map(nullptr)
  , _trackCount(0)
  , _cX(0)
  , _cY(0)
{
}

ActorFeature *MonsterAi::clone()
{
  MonsterAi* cloned = new MonsterAi;
  cloned->_map = _map;
  cloned->_trackCount = _trackCount;
  cloned->_cX = _cX;
  cloned->_cY = _cY;

  return cloned;
}

bool MonsterAi::isEqual(ActorFeature *rhs)
{
  bool equal = false;
  MonsterAi* crhs = dynamic_cast<MonsterAi*>(rhs);

  if (crhs)
  {
    equal = true;
  }

  return equal;
}

void MonsterAi::update(Map *map)
{
  _map = map;
  if (_owner->isAlive() && _map)
  {
    updatePosition();

    if (_map->isInFov(_cX, _cY))
    {
      _trackCount = TrackingTurns;
    }
    else
    {
      --_trackCount;
    }

    if ( _trackCount > 0)
    {
      huntPlayer();
    }
  }
}

void MonsterAi::huntPlayer()
{
  int dx = Actor::Player->getX() - _cX;
  int dy = Actor::Player->getY() - _cY;
  int stepDx = (dx > 0 ? 1:-1);
  int stepDy = (dy > 0 ? 1:-1);

  float distance = sqrtf(dx*dx + dy*dy);

  if ( distance >= 2 )
  {
    dx = (int)(round(dx/distance));
    dy = (int)(round(dy/distance));

    if ( !_map->isBlocked(_cX+dx, _cY+dy) )
    {
      _owner->move(dx, dy);
    }
    else if ( !_map->isBlocked(_cX+stepDx, _cY) )
    {
      _owner->move(stepDx, 0);
    }
    else if ( !_map->isBlocked(_cX, _cY+stepDy) )
    {
      _owner->move(0, stepDy);
    }
  }
  else if ( _owner->afFighter() )
  {
    _owner->afFighter()->attack(Actor::Player);
  }
}

void MonsterAi::updatePosition()
{
  _cX = _owner->getX();
  _cY = _owner->getY();
}
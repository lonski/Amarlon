#ifndef SINGLENEIGHBOURSELECTOR_H
#define SINGLENEIGHBOURSELECTOR_H

#include "target_selector.h"

namespace amarlon {

class SingleNeighbourSelector : public TargetSelector
{
public:
  SingleNeighbourSelector(const std::string& selectionMessage = "Select a tile..");

  virtual std::vector<Actor*> select(bool (*filterFun)(Actor*) = nullptr);
  virtual Actor* selectFirst(bool (*filterFun)(Actor*) = nullptr);
};

}

#endif // SINGLENEIGHBOURSELECTOR_H

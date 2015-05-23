#ifndef MAP_H
#define MAP_H

#include <vector>
#include <functional>
#include <memory>
#include <list>
#include <stdexcept>
#include <libtcod.hpp>
#include <map_id.h>
#include <tile_db.h>
#include <map_gateway.h>
#include <container.h>

namespace amarlon {

typedef unsigned int u32;

class Actor;

typedef std::shared_ptr<Container> ContainerPtr;

struct Tile
{
  constexpr static int defaultMonsterRenderPriority = 10;
  constexpr static int defaultItemRenderPriority = 20;

  bool explored;
  TileType type;
  ContainerPtr actors;

  Tile()
    : explored(false)
    , actors( new Container(999) )
  {}
};

class Map : public std::enable_shared_from_this<Map>
{
public:
  typedef std::vector< std::vector<Tile> > TileMatrix;
  typedef std::vector<Tile> TileRow;

  static TileDB Tiles;
  static MapGateway Gateway;

  Map(u32 width, u32 height, MapId id = MapId::Null);
  virtual ~Map();

  virtual bool isExplored(int x, int y);
  virtual bool isInFov(int x, int y);
  virtual bool isBlocked(int x, int y);

  virtual void addActor(ActorPtr actor);
  virtual  bool removeActor(ActorPtr toRemove);
  virtual ActorPtr getFirstActor(int x, int y);
  virtual std::vector<ActorPtr> getActors(int x, int y, std::function<bool (amarlon::ActorPtr)>* filterFun = nullptr);
  virtual std::vector<ActorPtr> getActors(std::function<bool(ActorPtr)>* filterFun);
  virtual ContainerPtr getActorsContainer(u32 x, u32 y);

  virtual void performActionOnActors(std::function<void(ActorPtr)> func);

  virtual void render(TCODConsole* console);
  virtual void updateActorCell(ActorPtr actor);

  virtual void computeFov(int x, int y, int radius);
  virtual void fill(std::string tilesStr);
  virtual std::string tilesToStr();

  virtual TCODColor getColor(u32 x, u32 y);
  virtual char getChar(u32 x, u32 y);
  virtual u32 getWidth() const;
  virtual void setWidth(const u32 &width);
  virtual u32 getHeight() const;
  virtual void setHeight(const u32 &height);
  virtual MapId getId() const;
  virtual void setId(const MapId &id);

private:
  MapId _id;
  u32 _width, _height;
  TileMatrix _tiles;
  TCODMap codMap;

  Tile& getTile(u32 x, u32 y);
  void validateMapCoords(u32 x, u32 y);
  void renderTile(u32 x, u32 y, TCODConsole *console);
  void renderActorsOnTile(u32 x, u32 y, TCODConsole *console);

};

typedef std::shared_ptr<Map> MapPtr;
typedef std::weak_ptr<Map> MapWPtr;

}
#endif // MAP_H

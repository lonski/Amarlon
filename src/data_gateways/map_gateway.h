#ifndef MAPGATEWAY_H
#define MAPGATEWAY_H

#include <map>
#include <vector>
#include <memory>
#include <xml/rapidxml.hpp>
#include <xml/rapidxml_print.hpp>
#include <map_id.h>
#include <map_parser.h>

namespace amarlon {

class Map;
class Actor;

typedef std::shared_ptr<Map> MapPtr;

class MapGateway
{
public:
  MapGateway();
  virtual ~MapGateway();

  virtual MapPtr fetch(MapId id);
  virtual bool load(const std::string& fn);
  virtual bool store(const std::string& fn);

protected:
  MapParser _mapParser;
  std::map<MapId, MapPtr> _maps;  

  void parseMaps(rapidxml::xml_document<> &doc);
  std::shared_ptr< rapidxml::xml_document<> > serializeMaps();

};

typedef std::shared_ptr<MapGateway> MapGatewayPtr;

}

#endif // MAPGATEWAY_H

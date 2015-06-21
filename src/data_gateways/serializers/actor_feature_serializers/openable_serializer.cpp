#include "openable_serializer.h"
#include <openable.h>
#include <utils.h>

using namespace rapidxml;

namespace amarlon {

OpenableSerializer::OpenableSerializer()
  : OpenableSerializer(nullptr, nullptr)
{
}

OpenableSerializer::OpenableSerializer(rapidxml::xml_document<>* document, rapidxml::xml_node<>* xmlNode)
  : ActorFeatureSerializer(document, xmlNode)
{
}

OpenableSerializer::~OpenableSerializer()
{
}

void OpenableSerializer::serializeOpenableCommonPart(xml_node<>* openableNode, OpenablePtr openable)
{
  if ( openableNode && openable && _document )
  {
    openableNode->append_attribute( _document->allocate_attribute(
                                       "lockId",
                                       _document->allocate_string( toStr( openable->getLockId() ).c_str()) ) );
    openableNode->append_attribute( _document->allocate_attribute(
                                       "locked",
                                       _document->allocate_string( toStr(
                                                                     static_cast<int>(openable->isLocked())
                                                                     ).c_str()) ) );
  }
}

}
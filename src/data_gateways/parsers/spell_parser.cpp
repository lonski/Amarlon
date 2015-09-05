#include "spell_parser.h"
#include <xml_utils.h>

namespace amarlon {

SpellParser::SpellParser(rapidxml::xml_node<> *xmlNode)
  : Parser(xmlNode)
{
}

SpellDescriptionPtr SpellParser::parseSpellDsc()
{
  SpellDescriptionPtr spellDsc;

  if ( _xml != nullptr)
  {
    spellDsc.reset( new SpellDescription );

    spellDsc->name = getAttribute<std::string>(_xml, "name");
    spellDsc->level = getAttribute<int>(_xml, "level");
    spellDsc->spellClass = getAttribute<int>(_xml, "class");
    spellDsc->targetType = getAttribute<int>(_xml, "targetType");
    spellDsc->id = getAttribute<int>(_xml, "id");

    rapidxml::xml_node<>* effectsNode = _xml->first_node("Effects");
    if ( effectsNode != nullptr)
    {
      rapidxml::xml_node<>* effectNode = effectsNode->first_node("Effect");
      while( effectNode != nullptr )
      {
        _effectParser.setSource( effectNode );
        spellDsc->effects.push_back( _effectParser.parseEffectDsc() );
        effectNode = effectNode->next_sibling();
      }
    }

    rapidxml::xml_node<>* animationNode = _xml->first_node("Animation");
    while( animationNode != nullptr )
    {
      _animationParser.setSource( animationNode );
      spellDsc->animation =  _animationParser.parseAnimationDsc();
      animationNode = animationNode->next_sibling();
    }

  }

  return spellDsc;
}

}

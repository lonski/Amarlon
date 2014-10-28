#include "widget.h"

namespace amarlon { namespace gui {

Widget::Widget()
  : _x(0)
  , _y(0)
{
}

int Widget::getX() const
{
  return _x;
}
int Widget::getY() const
{
  return _y;
}

void Widget::setPosition(int x, int y)
{
  _x = x;
  _y = y;
}

std::string Widget::getTag(const std::string &tagName)
{
  auto tag = _tags.find(tagName);
  return tag == _tags.end() ? "" : tag->second;
}

void Widget::setTag(const std::string &tagName, const std::string &tagValue)
{
  _tags[tagName] = tagValue;
}

}}

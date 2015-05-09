#ifndef AMENU_ITEM_H
#define AMENU_ITEM_H

#include <memory>
#include <libtcod.hpp>
#include <awidget.h>

namespace amarlon { namespace gui {

class AMenuItem : public AWidget
{
public:
  AMenuItem() : _selected(false) {}
  virtual ~AMenuItem() {}

  virtual void select() = 0;
  virtual void deselect() = 0;
  virtual bool isSelected() const { return _selected; }

  virtual TCODColor getColor() const = 0;
  virtual void setColor(const TCODColor& color) = 0;

  virtual std::string getValue() const = 0;
  virtual void setValue(const std::string& value) = 0;

protected:
  bool _selected;

};

typedef std::shared_ptr<AMenuItem> AMenuItemPtr;

}}

#endif // AMENU_ITEM_H
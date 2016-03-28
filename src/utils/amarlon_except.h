#ifndef AMARLON_EXCEPT_H
#define AMARLON_EXCEPT_H

#include <exception>
#include <stdexcept>
#include <string>

namespace amarlon {

class amarlon_exeption : public std::runtime_error
{
public:
  amarlon_exeption(const std::string& msg = "") : std::runtime_error(msg) {}
  virtual ~amarlon_exeption() throw() {}
};

// === CREATION === //
class creation_error : public amarlon_exeption
{
public:
  creation_error(const std::string& msg = "") : amarlon_exeption("Creation error: " + msg) {}
  virtual ~creation_error() throw() {}
};

// === INVENTORY EXCEPTIONS === //

class inventory_error : public amarlon_exeption
{
public:
  inventory_error(const std::string& msg = "") : amarlon_exeption(msg) {}
  virtual ~inventory_error() throw() {}
};

// ===

class inventory_full : public inventory_error
{
public:
  inventory_full(const std::string& msg = "", const std::string& itemName = "")
    : inventory_error(msg)
    , _itemName(itemName)
  {}
  virtual ~inventory_full() throw() {}

  std::string getItemName() const
  {
    return _itemName;
  }

private:
  std::string _itemName;

};

// ~~~

}

#endif // AMARLON_EXCEPT_H

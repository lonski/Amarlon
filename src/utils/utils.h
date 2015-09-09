#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <memory>
#include "libtcod.hpp"

namespace amarlon {

class Actor;
typedef std::shared_ptr<Actor> ActorPtr;

static inline std::vector<std::string> explode(const std::string& str, char ch)
{
  std::vector<std::string> result;
  std::string line;

  for (auto s : str)
  {
    if (s == ch)
    {
      if (!line.empty())
      {
        result.push_back(line);
        line.clear();
      }
    }
    else
    {
      line += s;
    }
  }

  if (!line.empty())
  {
    result.push_back(line);
    line.clear();
  }

  return result;
}

template<typename T>
static T fromStr(const std::string& s)
{
  std::istringstream is(s);
  T t;
  is >> t;
  return t;
}

template<typename T>
static std::string toStr(const T& t)
{
  std::ostringstream os;
  os << t;
  return os.str();
}

template<typename T>
std::string to_stringp(T t, int prec = 1)
{
  std::stringstream ss;
  ss << std::setprecision(prec) << t;
  return ss.str();
}

static inline std::string tolowers(const std::string& str)
{  
  std::string r(str);
  std::transform(r.begin(), r.end(), r.begin(), ::tolower);
  return r;
}

static inline std::string colorToStr(TCODColor color, bool braces = false)
{
  std::stringstream ss;
  ss << std::setfill('0')
     << std::setw(2) << std::hex << (int)color.r
     << std::setw(2) << std::hex << (int)color.g
     << std::setw(2) << std::hex << (int)color.b;

  return braces ? "{"+ss.str()+"}" : ss.str();
}

static inline TCODColor strToColor(const std::string& str)
{
  TCODColor col;
  if (str.size() == 6)
  {
    std::stringstream ss;
    int r(0),g(0),b(0);

    ss << std::hex << str.substr(0,2);
    ss >> r;
    col.r = r;

    ss.clear();

    ss << std::hex << str.substr(2,2);
    ss >> g;
    col.g = g;
    ss.clear();

    ss << std::hex << str.substr(4,2);
    ss >> b;
    col.b = b;

  }
  return col;
}

static inline bool handleDirectionKey(TCOD_key_t &key, int& dx, int& dy)
{
  bool handled = true;

  switch(key.vk)
  {
    case TCODK_DOWN: dy++; break;
    case TCODK_KP2: dy++; break;

    case TCODK_UP: dy--; break;
    case TCODK_KP8: dy--; break;

    case TCODK_LEFT: dx--; break;
    case TCODK_KP4: dx--; break;

    case TCODK_RIGHT: dx++; break;
    case TCODK_KP6: dx++; break;

    case TCODK_KP7: dx--; dy--; break;
    case TCODK_KP9: dx++; dy--; break;
    case TCODK_KP1: dx--; dy++; break;
    case TCODK_KP3: dx++; dy++; break;
    default: handled = false; break;
  }

  return handled;
}

template<typename T>
void setBit(T& var, int n, bool value)
{
  var ^= (-value ^ var) & (1 << n);
}

template<typename T>
bool isBitSet(T& var, int n)
{
  return (var >> n) & 1;
}

std::string getItemNameAndAmount(ActorPtr a);

}
#endif // UTILS_H

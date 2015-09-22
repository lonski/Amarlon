#include "cmd_fullscreen.h"

namespace amarlon {

CmdFullscreen::CmdFullscreen()
{
}

bool CmdFullscreen::accept(TCOD_key_t &key)
{
  return ( key.vk == TCODK_F12 );
}

int CmdFullscreen::execute()
{
  TCODConsole::root->setFullscreen( !TCODConsole::root->isFullscreen() );
  return 0;
}

}


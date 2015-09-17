#include "messenger.h"
#include <gui.h>
#include <actor.h>
#include <utils.h>

namespace amarlon {

using namespace std;

Messenger::Messenger(std::weak_ptr<gui::Gui> gui)
  : _gui( gui )
{
}

Messenger::~Messenger()
{
}

void Messenger::onNotify(Subject *subject, Event event)
{
  Actor* actor = dynamic_cast<Actor*>(subject);
  if ( actor )
  {
    char msg[128];
    TCODColor color = TCODColor::white;

    switch( event.id )
    {
      case EventId::Actor_GotHit:
      {
        color = TCODColor::red;
        const char* format = "%s hits %s for %s hp.";

        sprintf(msg, format, event.params["attacker"].c_str(),
                             tolowers(actor->getName()).c_str(),
                             event.params["value"].c_str());
      }
      break;
      case EventId::Actor_ReceivedDamage:
      {
        color = TCODColor::red;
        const char* format = "%s got damage for %s hp.";

        sprintf(msg, format, actor->getName().c_str(),
                             event.params["value"].c_str() );
      }
      break;
      case EventId::Actor_ExperienceGained:
      {
        color = TCODColor::sky;
        const char* format = "%s gained %s xp.";

        sprintf(msg, format, actor->getName().c_str(),
                             event.params["value"].c_str());
      }
      break;
      case EventId::Actor_ExperienceLost:
      {
        color = TCODColor::darkerSky;
        const char* format = "%s lost %s xp.";

        sprintf(msg, format, actor->getName().c_str(),
                             event.params["value"].c_str());
      }
      break;
      case EventId::Actor_LeveledUp:
      {
        color = TCODColor::green;
        const char* format = "%s advanced to level %d.";
        msg[0] = '\0';

        CharacterPtr character = actor->getFeature<Character>();
        if ( character )
        {
          sprintf(msg,format, actor->getName().c_str(),
                              character->getLevel() );
        }
      }
      break;
      case EventId::Actor_Missed:
      {
        color = TCODColor::darkerYellow;
        const char* format = "%s missed %s.";

        sprintf(msg, format, actor->getName().c_str(),
                             tolowers(event.params["target"]).c_str() );
      }
      break;
      case EventId::Actor_Died:
      {
        color = TCODColor::darkerRed;
        const char* format = "%s dies.";

        sprintf(msg, format, actor->getName().c_str() );
      }
      break;
      case EventId::Actor_Pick:
      {
        color = TCODColor::yellow;

        if ( event.params.find("count") == event.params.end() )
        {
          const char* format = "%s picked %s.";
          sprintf(msg, format, actor->getName().c_str(),
                               tolowers( event.params["name"] ).c_str() );
        }
        else
        {
          const char* format = "%s picked %s from %s.";
          sprintf(msg, format, actor->getName().c_str(),
                               tolowers( event.params["name"] ).c_str(),
                               tolowers( event.params["from"] ).c_str());
        }
      }
      break;
      case EventId::Actor_Drop:
      {
        color = TCODColor::yellow;

        if ( fromStr<int>(event.params["count"]) > 1 )
        {
          const char* format = "%s dropped %s (%s).";
          sprintf(msg, format, actor->getName().c_str(),
                               tolowers(event.params["name"]).c_str(),
                               event.params["count"].c_str() );
        }
        else
        {
          const char* format = "%s dropped %s.";
          sprintf(msg, format, actor->getName().c_str(),
                               tolowers(event.params["name"]).c_str() );
        }
      }
      break;
      case EventId::Actor_Healed:
      {
        color = TCODColor::lighterBlue;
        const char* format = "%s has been healed for %s.";

        sprintf(msg, format, actor->getName().c_str(),
                             event.params["value"].c_str());
      }
      break;
      case EventId::Actor_Locked:
      {
        color = TCODColor::white;
        const char* format = "%s has been locked.";

        sprintf(msg, format, actor->getName().c_str());
      }
      break;
      case EventId::Actor_Unlocked:
      {
        color = TCODColor::white;
        const char* format = "%s has been unlocked.";

        sprintf(msg, format, actor->getName().c_str());
      }
      break;
      case EventId::Actor_Put:
      {
        color = TCODColor::darkYellow;
        const char* format = "%s put %s into %s.";

        sprintf(msg, format, event.params["putter"].c_str(),
                             actor->getName().c_str(),
                             event.params["container"].c_str() );
      }
      break;
      case EventId::Player_Look_At:
      {
        color = TCODColor::lightViolet;

        if ( event.params.find("item") != event.params.end() )
        {
          const char* format = "You see a(n) %s.";
          sprintf(msg, format, actor->getName().c_str());
        }
        else
        {
          const char* format = event.params["plural"] == "yes" ? "You see some items laying there."
                                                               : "You see some item laying there.";
          strcpy(msg, format);
        }

      }
      break;

      default:;
    }
    _gui.lock()->message( msg, color );
  }

}

}

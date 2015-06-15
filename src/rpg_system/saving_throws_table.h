#ifndef SAVING_THROWS_TABLE_H
#define SAVING_THROWS_TABLE_H

#include <map>
#include <character_classes.h>

namespace amarlon
{

namespace SavingThrows
{
  enum Type
  {
    DeathRayOrPoison,
    MagicWands,
    ParalysisOrPertrify,
    DragonBreath,
    Spells
  };

  int get(Type type, CharacterClass charClass, int level);

  static std::map< CharacterClass, std::map< Type, std::map<int, int> > > stTable =
  {
    {
      CharacterClass::Fighter,
      {
        {
          DeathRayOrPoison,
          {
            {0,     12},
            {1,     12},
            {2,     11},
            {3,     11},
            {4,     11},
            {5,     11},
            {6,     10},
            {7,     10},
            {8,     9},
            {9,     9},
            {10,    9},
            {11,    9},
            {12,    8},
            {13,    8},
            {14,    7},
            {15,    7},
            {16,    7},
            {17,    7},
            {18,    6},
            {19,    6},
            {20,    5}
          }
        },
        {
          MagicWands,
          {
            {0,     13},
            {1,     13},
            {2,     12},
            {3,     12},
            {4,     11},
            {5,     11},
            {6,     11},
            {7,     11},
            {8,     10},
            {9,     10},
            {10,    9},
            {11,    9},
            {12,    9},
            {13,    9},
            {14,    8},
            {15,    8},
            {16,    7},
            {17,    7},
            {18,    7},
            {19,    7},
            {20,    6}
          }
        },
        {
          ParalysisOrPertrify,
          {
            {0,     14},
            {1,     14},
            {2,     14},
            {3,     14},
            {4,     13},
            {5,     13},
            {6,     12},
            {7,     12},
            {8,     12},
            {9,     12},
            {10,    11},
            {11,    11},
            {12,    10},
            {13,    10},
            {14,    10},
            {15,    10},
            {16,    9},
            {17,    9},
            {18,    8},
            {19,    8},
            {20,    8}
          }
        },
        {
          DragonBreath,
          {
            {0,     15},
            {1,     15},
            {2,     15},
            {3,     15},
            {4,     14},
            {5,     14},
            {6,     14},
            {7,     14},
            {8,     13},
            {9,     13},
            {10,    12},
            {11,    12},
            {12,    12},
            {13,    12},
            {14,    11},
            {15,    11},
            {16,    10},
            {17,    10},
            {18,    10},
            {19,    10},
            {20,    9}
          }
        },
        {
          Spells,
          {
            {0,     17},
            {1,     17},
            {2,     16},
            {3,     16},
            {4,     15},
            {5,     15},
            {6,     15},
            {7,     15},
            {8,     14},
            {9,     14},
            {10,    13},
            {11,    13},
            {12,    13},
            {13,    13},
            {14,    12},
            {15,    12},
            {16,    11},
            {17,    11},
            {18,    11},
            {19,    11},
            {20,    10}
          }
        }
      }
    },

    {
      CharacterClass::Thief,
      {
        {
          DeathRayOrPoison,
          {
            {0,     13},
            {1,     13},
            {2,     12},
            {3,     12},
            {4,     11},
            {5,     11},
            {6,     11},
            {7,     11},
            {8,     10},
            {9,     10},
            {10,    9},
            {11,    9},
            {12,    9},
            {13,    9},
            {14,    8},
            {15,    8},
            {16,    7},
            {17,    7},
            {18,    7},
            {19,    7},
            {20,    6}
          }
        },
        {
          MagicWands,
          {
            {0,     14},
            {1,     14},
            {2,     14},
            {3,     14},
            {4,     13},
            {5,     13},
            {6,     13},
            {7,     13},
            {8,     12},
            {9,     12},
            {10,    12},
            {11,    12},
            {12,    10},
            {13,    10},
            {14,    10},
            {15,    10},
            {16,    9},
            {17,    9},
            {18,    9},
            {19,    9},
            {20,    8}
          }
        },
        {
          ParalysisOrPertrify,
          {
            {0,     13},
            {1,     13},
            {2,     12},
            {3,     12},
            {4,     12},
            {5,     12},
            {6,     11},
            {7,     11},
            {8,     11},
            {9,     11},
            {10,    10},
            {11,    10},
            {12,    10},
            {13,    10},
            {14,    9},
            {15,    9},
            {16,    9},
            {17,    9},
            {18,    8},
            {19,    8},
            {20,    8}
          }
        },
        {
          DragonBreath,
          {
            {0,     16},
            {1,     16},
            {2,     15},
            {3,     15},
            {4,     14},
            {5,     14},
            {6,     13},
            {7,     13},
            {8,     12},
            {9,     12},
            {10,    11},
            {11,    11},
            {12,    10},
            {13,    10},
            {14,    9},
            {15,    9},
            {16,    8},
            {17,    8},
            {18,    7},
            {19,    7},
            {20,    6}
          }
        },
        {
          Spells,
          {
            {0,     15},
            {1,     15},
            {2,     14},
            {3,     14},
            {4,     13},
            {5,     13},
            {6,     13},
            {7,     13},
            {8,     12},
            {9,     12},
            {10,    11},
            {11,    11},
            {12,    11},
            {13,    11},
            {14,    10},
            {15,    10},
            {16,    9},
            {17,    9},
            {18,    9},
            {19,    9},
            {20,    8}
          }
        }
      }
    },

    {
      CharacterClass::MagicUser,
      {
        {
          DeathRayOrPoison,
          {
            {0,     13},
            {1,     13},
            {2,     13},
            {3,     13},
            {4,     12},
            {5,     12},
            {6,     12},
            {7,     12},
            {8,     11},
            {9,     11},
            {10,    11},
            {11,    11},
            {12,    10},
            {13,    10},
            {14,    10},
            {15,    10},
            {16,    9},
            {17,    9},
            {18,    9},
            {19,    9},
            {20,    8}
          }
        },
        {
          MagicWands,
          {
            {0,     14},
            {1,     14},
            {2,     14},
            {3,     14},
            {4,     13},
            {5,     13},
            {6,     12},
            {7,     12},
            {8,     11},
            {9,     11},
            {10,    10},
            {11,    10},
            {12,    10},
            {13,    10},
            {14,    9},
            {15,    9},
            {16,    8},
            {17,    8},
            {18,    7},
            {19,    7},
            {20,    6}
          }
        },
        {
          ParalysisOrPertrify,
          {
            {0,     13},
            {1,     13},
            {2,     13},
            {3,     13},
            {4,     12},
            {5,     12},
            {6,     11},
            {7,     11},
            {8,     10},
            {9,     10},
            {10,    9},
            {11,    9},
            {12,    9},
            {13,    9},
            {14,    8},
            {15,    8},
            {16,    7},
            {17,    7},
            {18,    6},
            {19,    6},
            {20,    5}
          }
        },
        {
          DragonBreath,
          {
            {0,     16},
            {1,     16},
            {2,     15},
            {3,     15},
            {4,     15},
            {5,     15},
            {6,     14},
            {7,     14},
            {8,     14},
            {9,     14},
            {10,    13},
            {11,    13},
            {12,    13},
            {13,    13},
            {14,    12},
            {15,    12},
            {16,    12},
            {17,    12},
            {18,    11},
            {19,    11},
            {20,    11}
          }
        },
        {
          Spells,
          {
            {0,     15},
            {1,     15},
            {2,     14},
            {3,     14},
            {4,     13},
            {5,     13},
            {6,     13},
            {7,     13},
            {8,     12},
            {9,     12},
            {10,    11},
            {11,    11},
            {12,    11},
            {13,    11},
            {14,    10},
            {15,    10},
            {16,    9},
            {17,    9},
            {18,    9},
            {19,    9},
            {20,    8}
          }
        }
      }
    },

    {
      CharacterClass::Cleric,
      {
        {
          DeathRayOrPoison,
          {
            {0,     11},
            {1,     11},
            {2,     10},
            {3,     10},
            {4,     9},
            {5,     9},
            {6,     9},
            {7,     9},
            {8,     8},
            {9,     8},
            {10,    8},
            {11,    8},
            {12,    7},
            {13,    7},
            {14,    7},
            {15,    7},
            {16,    6},
            {17,    6},
            {18,    6},
            {19,    6},
            {20,    5}
          }
        },
        {
          MagicWands,
          {
            {0,     12},
            {1,     12},
            {2,     11},
            {3,     11},
            {4,     10},
            {5,     10},
            {6,     10},
            {7,     10},
            {8,     9},
            {9,     9},
            {10,    9},
            {11,    9},
            {12,    8},
            {13,    8},
            {14,    8},
            {15,    8},
            {16,    7},
            {17,    7},
            {18,    7},
            {19,    7},
            {20,    6}
          }
        },
        {
          ParalysisOrPertrify,
          {
            {0,     14},
            {1,     14},
            {2,     13},
            {3,     13},
            {4,     13},
            {5,     13},
            {6,     12},
            {7,     12},
            {8,     12},
            {9,     12},
            {10,    11},
            {11,    11},
            {12,    11},
            {13,    11},
            {14,    10},
            {15,    10},
            {16,    10},
            {17,    10},
            {18,    9},
            {19,    9},
            {20,    9}
          }
        },
        {
          DragonBreath,
          {
            {0,     16},
            {1,     16},
            {2,     15},
            {3,     15},
            {4,     15},
            {5,     15},
            {6,     14},
            {7,     14},
            {8,     14},
            {9,     14},
            {10,    13},
            {11,    13},
            {12,    13},
            {13,    13},
            {14,    12},
            {15,    12},
            {16,    12},
            {17,    12},
            {18,    11},
            {19,    11},
            {20,    11}
          }
        },
        {
          Spells,
          {
            {0,     15},
            {1,     15},
            {2,     14},
            {3,     14},
            {4,     14},
            {5,     14},
            {6,     13},
            {7,     13},
            {8,     13},
            {9,     13},
            {10,    12},
            {11,    12},
            {12,    12},
            {13,    12},
            {14,    11},
            {15,    11},
            {16,    11},
            {17,    11},
            {18,    10},
            {19,    10},
            {20,    10}
          }
        }
      }
    }
  };

}

}
#endif // SAVING_THROWS_TABLE_H

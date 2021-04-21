#ifndef SS_NAKE_H
#define SS_NAKE_H

#include "constants.hpp"
#include "directions.hpp"
#include "coords.hpp"

namespace ssnake{
  struct Snake{
	  bool alive = true;
    int length;
    Direction direction;
    Coords position;
    float speed = 0.3;
  };

  Snake* CreateSsnake();
  void MoveSsnake(Snake*);
}

#endif

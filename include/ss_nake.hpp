#ifndef SS_NAKE_H
#define SS_NAKE_H

#include "constants.hpp"
#include "directions.hpp"
#include "coords.hpp"

struct Snake{
	bool alive = true;
  int length;
  Direction direction;
  Coords position;
};

#endif

#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include "directions.hpp"

namespace input_handler{
  Direction PopBuffer(Direction);
  void CatchInput();
}

#endif

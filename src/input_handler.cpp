#include "directions.hpp"
#include <queue>
#include <ncurses.h>

namespace input_handler{
  void CatchInput(){
    // Store all our input to be processed
    std::queue<Direction> input_queue;
    for(int i = 0; i<30; ++i){   // Demo: This will be handled by its own thread
      getch();
      printw("a\n");
      // Demo: Fakeing randomness
      if(i%2 == 0){
        input_queue.push(Direction::bottom);
      }else{
        input_queue.push(Direction::right);
      }
    }
  }
}

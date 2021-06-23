#include "directions.hpp"
#include <queue>
#include <ncurses.h>
#include <mutex>

namespace input_handler{
  // I really don't know if this variable should have this scope (send books for help :P)
  // I am assuming it must have scope on both functions that modify our shared resource
  std::mutex buffer_mutex;

  static std::queue<Direction> input_buffer;
  /*
  std::queue<Direction>* CreateInputQueue(){
    std::queue<Direction>* ptr_input_buffer = new std::queue<Direction>;
    return ptr_input_buffer;
  }
  */
  void PushBuffer(std::queue<Direction>* input_buffer, Direction new_direction){
    std::lock_guard<std::mutex> guard(buffer_mutex);
    input_buffer->push(new_direction);
  }

  Direction PopBuffer(Direction prev_direction){
    std::lock_guard<std::mutex> guard(buffer_mutex);
    if(!input_buffer.empty()){
      Direction new_direction = input_buffer.front();
      input_buffer.pop();
      return new_direction;
    }
    return prev_direction;
  }

  void CatchInput(){
    // Store all our input to be processed
    //std::queue<Direction>* ptr_input_queue = CreateInputQueue();
    for(int i = 0; i<30; ++i){   // Demo: This will be handled by its own thread
      getch();
      //printw("a\n");
      // Demo: Fakeing randomness
      if(i%2 == 0){
        input_buffer.push(Direction::bottom);
      }else{
        input_buffer.push(Direction::right);
      }
    }
    //delete ptr_input_queue;
  }
}

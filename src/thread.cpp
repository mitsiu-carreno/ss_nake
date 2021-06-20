#include "thread.hpp"
#include "game_controller.hpp"
#include "input_handler.hpp"
#include <thread>

namespace thread{
  void HandleThreads(){

    // Create a new thread that calls GetNewDirection()
    std::thread t_get_input(&input_handler::CatchInput);

    // Create a new thread that calls MainLoop() and send new_direction as argument
    std::thread t_main_loop(&game_controller::MainLoop);

    // Both threads are executing concurrently

    // When new_direciton is catched
    t_get_input.join();
    t_main_loop.join();
  }
}

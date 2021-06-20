#include "thread.hpp"
#include "game_controller.hpp"
#include "input_handler.hpp"
#include <thread>
#include <future>
#include <mutex>
#include <string>

namespace thread{
  /*
  // As we have multiple threads executing at the same time, we 
  // gotta handle the std::cout calls so messages don't get mixed up
  void PrintSafe(std::string const &s){
    // Our mutex will flag and therefore protect that each std::cout 
    // call is handled one at the time, static is needed so that the 
    // var prevail through several calls
    static std::mutex my_mutex;

    // Is a mutex wrapper that provides a mechanism for owning 
    // a mutex for the duration of a scoped block
    // at the end of the block lock_guard is destructed and
    // the mutex is released
    const std::lock_guard<std::mutex> l(my_mutex);
    std::cout << s;
    std::cout << std::flush>;
  }
  */

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

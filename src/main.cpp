#include "thread.hpp"
//#include "game_controller.hpp"
#include <ncurses.h>


int main(){
  initscr();  // start curses mode

  thread::HandleThreads();
  //game_controller::MainLoop();
  //InputTest();

  endwin();   // end curses mode
  return 0;
}

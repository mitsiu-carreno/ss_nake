#include "thread.hpp"
#include <ncurses.h>


int main(){
  initscr();  // start curses mode

  thread::HandleThreads();

  endwin();   // end curses mode
  return 0;
}

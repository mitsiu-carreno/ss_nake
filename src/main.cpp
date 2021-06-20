#include "thread.hpp"
#include "game_controller.hpp"
#include <ncurses.h>

void InputTest(){
  for(int i = 0; i<30; ++i){
    getch();
    printw("in\n");
  }
}

int main(){
  initscr();  // start curses mode

  //thread::HandleThreads();
  game_controller::MainLoop();
  //InputTest();

  endwin();   // end curses mode
  return 0;
}

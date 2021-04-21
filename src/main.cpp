#include "game_controller.hpp"
#include <ncurses.h>

bool initGame(){
	int screen_height, screen_width;
	getmaxyx(stdscr, screen_height, screen_width);
  printw("%d, %d", screen_height, screen_width);
  return true;
}


int main(){
  initscr();  // start curses mode

  MainLoop();

  endwin();   // end curses mode
  return 0;
}

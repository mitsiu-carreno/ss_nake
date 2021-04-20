#include "ss_nake.hpp"
#include "directions.hpp"
#include "coords.hpp"
#include "game_controller.hpp"
#include <ncurses.h>
#include <time.h>
#include <iostream>

bool initGame(){
	int screen_height, screen_width;
	getmaxyx(stdscr, screen_height, screen_width);
  printw("%d, %d", screen_height, screen_width);
  return true;
}


int main(){
  initscr();  // start curses mode

  printw("Hello friend\n");
  Snake snake;
  snake.length = 1;
  snake.direction = Direction::top;
  snake.position = {5,5};  

  mvaddch(2,2,'X');

  getch();

  MainLoop();

  mvaddch(4,4,'X');
  getch();
  endwin();   // end curses mode
  
  
 /* 

char input;
  std::cin >> input; 
  std::cout << "start\n";
  
  clock_t begin;
  begin = clock();

  clock_t elapsed_time = 0;
  while(elapsed_time < 5){
    std::cout << elapsed_time << "\n";
    elapsed_time = double(clock() - begin)/CLOCKS_PER_SEC;
  }
  std::cout << "finished\n";
*/

  return 0;
}

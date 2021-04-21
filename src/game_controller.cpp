#include "utils.hpp"
#include "ss_nake.hpp"
#include <time.h>   // clock_t, clock, CLOCKS_PER_SEC
#include <ncurses.h>
#include <tuple>

void MainLoop(){
  int screen_width, screen_height;
  std::tie(screen_width, screen_height) = utils::GetScreenSize();

  ssnake::Snake* ssnake = ssnake::CreateSsnake();
  ssnake->position.x = screen_width/2;
  ssnake->position.y = screen_height/2;
  int steps = 0;

  while(steps < 20){
    clock_t begin_time = clock();
    double elapsed_seconds = 0;
    while(elapsed_seconds < ssnake->speed){
      elapsed_seconds = double(clock() - begin_time)/CLOCKS_PER_SEC;
    }
    mvaddch(ssnake->position.y, ssnake->position.x, 'X');
    refresh();
    ++steps;
    MoveSsnake(ssnake);
    //++ssnake->position.x;
  }
  delete ssnake;
} 

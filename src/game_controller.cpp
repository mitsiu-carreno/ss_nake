#include "constants.hpp"
#include <time.h>   // clock_t, clock, CLOCKS_PER_SEC
#include <ncurses.h>

/*
void MainLoop(){
  clock_t t;
  t = clock();

  size_t size = 100000;
  int *pInt = new int[size];
  for(size_t i = 0; i<size; ++i){
    pInt[i] = 100;
  }
  t = clock() - t;
  //printw("Time %d miliseconds\n", t);
  //printw("%d clocks per second\n", CLOCKS_PER_SEC);
  //printw("time: %d seconds\n", t*1.0/CLOCKS_PER_SEC);
  //getch();
  if(t > 10){
    printw("in");
  }else{
    printw("out");
  }
    printw("%d\n", t);
    printw("%f\n", t*1.0/CLOCKS_PER_SEC);
    getch();

  delete []pInt;
}

*/

void MainLoop(){
  int steps = 0;
  int row = 10, col = 10;
  while(steps < 5){
    clock_t begin_time = clock();
    double elapsed_seconds = 0;
    while(elapsed_seconds < 0.5){
      elapsed_seconds = double(clock() - begin_time)/CLOCKS_PER_SEC;
    }
    mvaddch(3,steps, 'X');
    refresh();
    ++col;
    ++row;
    ++steps;
  }
} 

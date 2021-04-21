/*
#include "coords.hpp"

namespace utils{
	// Get the coordinates that represent the center of the current screen size
#if defined(WIN32) 
	 Coords GetCenterScreen(){
	 	
	}
}
*/

#include <ncurses.h>
#include <tuple>

namespace utils{
  std::tuple<int, int> GetScreenSize(){
    int screen_height, screen_width;
    getmaxyx(stdscr, screen_height, screen_width);
    return std::make_tuple(screen_width, screen_height);
  }
}

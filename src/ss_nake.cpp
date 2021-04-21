#include "ss_nake.hpp"

#include "constants.hpp"
#include "directions.hpp"
#include "coords.hpp"

namespace ssnake{
	
	// Instantiates and initialize a snake struct 
	Snake* CreateSsnake(){
		Snake* ssnake = new Snake;

		ssnake->length 		= Constants::KInitLength;
		ssnake->direction = Direction::right;
    return ssnake;
	}	
  
  // Change ssnake position based on current direction
  void MoveSsnake(Snake* ssnake){
    switch(ssnake->direction){
      case Direction::top:
        --ssnake->position.y;
        break;
      case Direction::bottom:
        ++ssnake->position.y;
        break;
      case Direction::left:
        --ssnake->position.x;
        break;
      case Direction::right:
        ++ssnake->position.x;
        break;
      default:
        // WTF! Lets get this guy back on track
        ssnake->direction = Direction::right;
        MoveSsnake(ssnake);
    }  
  }
} 


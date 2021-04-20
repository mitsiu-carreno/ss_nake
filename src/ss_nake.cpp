#include "ss_nake.hpp"

#include "constants.hpp"
#include "directions.hpp"
#include "coords.hpp"

namespace ssnake{
	
	// Instantiates and initialize a snake struct 
	Snake* CreateSsnake(){
		Snake* ssnake = new Snake;

		ssnake->alive 		= true;
		ssnake->length 		= Constants::KInitLength;
		ssnake->direction = Direction::right;
		//ssnake->position 	= utils::GetCenterScreen();
    ssnake->position  = {10, 10};
    return ssnake;
	}	
}


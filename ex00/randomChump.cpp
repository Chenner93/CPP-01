#include "Zombie.hpp"
#include <iostream>

// • void randomChump( std::string name );
// It creates a zombie, name it, and the zombie announces itself.

void randomChump( std::string name )
{
	Zombie	new_zombie = Zombie(name);

	new_zombie.announce();
}
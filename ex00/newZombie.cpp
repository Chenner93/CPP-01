#include "Zombie.hpp"
#include <iostream>

// • Zombie* newZombie( std::string name );
// It creates a zombie, name it, and return it so you can use it outside of the function
// scope.

Zombie* newZombie( std::string name )
{
	Zombie	*new_zombie;
	new_zombie = new Zombie(name);
	return (new_zombie);
};
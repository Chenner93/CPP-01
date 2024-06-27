#include "Zombie.hpp"
#include <iostream>

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int	main(void)
{
	Zombie *zombie;

	zombie = newZombie("Bernard");
	delete zombie;
	randomChump("l'Hermite");
	return(0);
}

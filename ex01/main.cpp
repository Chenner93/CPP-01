#include "Zombie.hpp"
#include <iostream>

void randomChump( std::string name );
Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

const static int	qte_zombie = 3;

int	main(void)
{
	Zombie	*ptr_first_zombie;
	ptr_first_zombie = zombieHorde(qte_zombie, "Claire");
	
	ptr_first_zombie->suppress_zombie(qte_zombie);
	// ptr_first_zombie->announce();
	return (0);
}

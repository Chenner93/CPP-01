#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*ptr_first_zombie;
	Zombie	*zombie;
	Zombie	*next_zombie;

	
	for (int i = 0; i < N; i++) {
		if (i == 0)
		{	
			zombie = new Zombie();
			zombie->give_name(name);
			ptr_first_zombie = zombie;
		}
		else
		{
			next_zombie = new Zombie();
			next_zombie->give_name(name);
			zombie->init_next_zombie(next_zombie);
			zombie = next_zombie;
		}
	}
	return (ptr_first_zombie);
};
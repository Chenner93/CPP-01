#include "Zombie.hpp"

#include <string>
#include <iostream>

Zombie::Zombie( std::string zombie_name) {
	this->name = zombie_name;
	std::cout << "Constructor called on " + this->name << std::endl;
};

Zombie::~Zombie(void) {
	std::cout << "Destrucstor called on " + this->name << std::endl;
};

void	Zombie::announce( void) {
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
};

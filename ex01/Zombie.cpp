#include "Zombie.hpp"

#include <string>
#include <iostream>

Zombie::Zombie(void) {
	std::cout << "Classic constructor called" << std::endl;
};

Zombie::~Zombie(void) {
	std::cout << "Destrucstor called on " + this->name << std::endl;
};

void	Zombie::give_name( std::string zombie_name) {
	this->name = zombie_name;
	this->next = nullptr;
	std::cout << "Name given " + this->name << std::endl;
};

void	Zombie::announce( void) {
	if (this == nullptr)
		return ;
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
	this->next->announce();
};

void	Zombie::init_next_zombie( Zombie *next_zombie ) {
	this->next = next_zombie;
};

void	Zombie::suppress_zombie( int qte_zombie) {
	Zombie	*to_suppress;
	Zombie	*zombie_ptr = this;

	for (int i = 0; i < qte_zombie; i++) {
		if (zombie_ptr == nullptr)
			break ;
		to_suppress = zombie_ptr;
		zombie_ptr = zombie_ptr->next;
		delete to_suppress;
	}
}

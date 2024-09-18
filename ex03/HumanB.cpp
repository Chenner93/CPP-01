#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->tool = nullptr;
	this->name = name;
};

HumanB::~HumanB(){};

void	HumanB::attack(void){
	if (this->tool == nullptr)
		std::cout << this->name << " attacks with their barehanded" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->tool->getType() << std::endl;
};

// void    HumanB::setWeapon(Weapon club)
// {
// 	this->tool = club.getType();
// };

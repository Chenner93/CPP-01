#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	std::cout << "Constructor HumanB" << std::endl;
};

HumanB::~HumanB(){
	std::cout << "Destructor HumanB" << std::endl;
};

void	HumanB::attack(void){
	if (this->tool == nullptr)
		std::cout << this->name << "Get killed" << std::endl;
	else
		std::cout << this->name << " attacks with a " << this->tool->getType() << std::endl;
};

void    HumanB::setWeapon(Weapon &club)
{
	this->tool = &club;
};

#include "Weapon.hpp"

// Weapon::Weapon(void)
// {
// 	// this->type = "Cailloux";
// 	std::cout << "Constructor Weapon" << std::endl;
// }

Weapon::Weapon( std::string type ){
	this->type = type;
	std::cout << "Constructor Weapon" << std::endl;
};

Weapon::~Weapon( void ){
	std::cout << "Destructor Weapon" << std::endl;
};

const std::string	Weapon::getType( void )
{
	return (this->type);
};

void	Weapon::setType(std::string str)
{
	this->type = str;
};

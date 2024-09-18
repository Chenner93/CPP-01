#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &club)
	:tool(club)
{
	this->name = name;
	std::cout << "Contructor HumanA" << std::endl;
};

HumanA::~HumanA(void){
	std::cout << "Destructor HumanA" << std::endl;
};

void	HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->tool.getType() << std::endl;
};
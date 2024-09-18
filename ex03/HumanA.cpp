#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon club){
	this->name = name;
	this->tool = club; // Probem pas regler du tout
	std::cout << "Contructor HumanA" << std::endl;
};

HumanA::~HumanA(void){
	std::cout << "Destructor HumanA" << std::endl;
};

void	HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->tool.getType() << std::endl;
};
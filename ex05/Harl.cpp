#include "Harl.hpp"

Harl::Harl(){
    std::cout << "Construtor called" << std::endl;
};
Harl::~Harl(){
    std::cout << "Destrutor called" << std::endl;
};

void  Harl::debug(){
    std::cout << "This is a DEBUG message" << std::endl;
}

void  Harl::info(){
    std::cout << "This is a INFO message" << std::endl;
}

void  Harl::warning(){
    std::cout << "This is a WARNING message" << std::endl;
}

void  Harl::error(){
    std::cout << "This is a ERROR message" << std::endl;
}

void  Harl::complain(std::string level)
{
    const function_Harl	complains[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	level_complain = get_level(level);

	(this->*(complains[level_complain]))();
}

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

void	Harl::complain(std::string level)
{
	const int	level_complain = get_level(level);
    const function_Harl	complains[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const std::string	complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	switch(level_complain) {
		case 0:
		    (this->*(complains[0]))();
            break ;
        case 1:
            for (int i = 0; i <= level_complain; i++) {
		    (this->*(complains[i]))();
            }
            break ;
        case 2:
            for (int i = 0; i <= level_complain; i++) {
		    (this->*(complains[i]))();
            }
            break ;
        case 3:
            for (int i = 0; i <= level_complain; i++) {
		    (this->*(complains[i]))();
            }
            break ;
        default:
            std::cout << "default";
            break ;

	}
}

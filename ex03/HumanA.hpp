#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class   HumanA
{
    private:

        Weapon  &tool;
        std::string name;

    public:

        HumanA(std::string name, Weapon club);
        ~HumanA( void );
        void    attack(void);
};

#endif
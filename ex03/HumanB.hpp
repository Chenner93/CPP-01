#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class   HumanB
{
    private:

        Weapon  *tool;
        std::string name;

    public:

        HumanB(std::string name);
        ~HumanB( void );
        // void    setWeapon(Weapon club);
        void    attack(void);
};

#endif
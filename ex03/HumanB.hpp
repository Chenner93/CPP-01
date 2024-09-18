#ifndef HUMANB_HPP
#define HUMANB_HPP

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
        void    attack(void);
        void    setWeapon(Weapon &club);
};

#endif
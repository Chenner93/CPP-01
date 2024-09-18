#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>


class	Weapon
{
	private:
	
		std::string type;

	public:
		
		// Weapon( void );
		Weapon(std::string);
		~Weapon( void );
		const std::string	getType( void );
		void	setType(std::string str);
};

#endif
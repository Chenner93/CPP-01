#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>


class	Weapon
{
	private:
	
		std::string type;

	public:
		
		Weapon(std::string type);
		~Weapon( void );
		const std::string	&getType( void );
		std::string	getType2( void );
		void	setType(std::string str);
};

#endif
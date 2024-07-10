#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class	Zombie
{
	private:
	
		std::string	name;
		Zombie		*next;

	public:
		
		Zombie( void );
		~Zombie( void );
		void 	announce( void );
		void 	init_next_zombie( Zombie *next_zombie );
		void	give_name( std::string zombie_name);
		void	suppress_zombie( int qte_zombie );
};

#endif
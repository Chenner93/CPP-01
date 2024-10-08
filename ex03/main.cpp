#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


// int	main(void)
// {
// 	std::cout << "test" << std::endl;
// 	return (0);
// }

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	printf("------------------------------------\n");
	{
		Weapon club("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}

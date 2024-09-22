#include "Harl.hpp"

bool	check_ac(int ac) {
	if (ac != 2)
	{
		std::cout << "Only one argument is required" << std::endl;
		return (false);
	}
	return (true);
}

bool	check_arg(std::string arg)
{
	if (get_level(arg) == -1)
	{
		std::cout << "Only those four arguments are accepted:" << std::endl;
		std::cout << "-DEBUG- -INFO- -WARNING- -ERROR-" << std::endl;
		return (false);
	}
	return (true);
}

int	get_level(std::string level)
{
	std::string	complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i < 4; i++) {
		if (level.compare(complain[i]) == 0)
			return (i);
	}
	return (-1);
}



int	main(int ac, char **av)
{
	if (check_ac(ac) == false || check_arg((std::string)av[1]) == false)
		return (1);

	Harl	harl;
	harl.complain(av[1]);
	return (0);
}
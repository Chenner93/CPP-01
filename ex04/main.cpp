#include <iostream>
#include <string>
#include <fstream>

//line.erase(start,end);

bool	checkArg(int ac, char **av)
{
	if (ac != 4) {
		std::cerr << "Require 3 arguments" << std::endl;
		return (false);
	}
	if (std::string(av[2]).length() == 0 || std::string(av[3]).length() == 0) {
		std::cerr << "One of the last 2 arguments is empty" << std::endl;
		return (false);
	}
	return true;
}

bool	checkOpen(std::ifstream *myfile, std::ofstream *newfile, char *av)
{
	myfile->open(av, std::ios::in); //in for input operation
	if (myfile->is_open() == false) {
		std::cerr << "file: " << av << " doesn't exist" << std::endl;
		return (false);
	}
	newfile->open(std::string(av) + ".replace", std::ios::out | std::ios::trunc); //in for input operation
	if (myfile->is_open() == false) {
		std::cerr << "file: " << "Failed to create/trunc newfile" << std::endl;
		return (false);
	}
	return (true);
}

int	main(int ac, char **av)
{
	std::string	line;
	std::ifstream myfile;
	std::ofstream newfile;
	size_t	index = 0;

	if (checkArg(ac, av) == false || checkOpen(&myfile, &newfile, av[1]) == false)
		return (1);
	while (std::getline(myfile, line))
	{
		while (1)
		{
			index = line.find(av[2]);
			if (index == -1)
				break ;
			line.erase(index, std::string(av[2]).length());
			line.insert(index, av[3]);
		}
		newfile << line << std::endl;
	}
	myfile.close();
	newfile.close();
	return (0);
}
#include "Harl.hpp"

void	yellowColor(std::string str) {
	std::cout << "\033[1;" << 33 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

void	redColor(std::string str) {
	std::cout << "\033[1;" << 31 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

void	greenColor(std::string str) {
	std::cout << "\033[1;" << 32 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		redColor("Wrong number of arguments!\n");
		return (0);
	}
	std::string	inputString(av[1]);
	Harl	harling;
	harling.filter(inputString);
	return (0);
}
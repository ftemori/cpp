#include "Harl.hpp"
#include <limits>
#include <iostream>
#include <cstdio>

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

int	main(void)
{
	std::string	level;
	Harl	harl;
	greenColor(" Please enter a level! Valid levels: ");
	yellowColor("DEBUG INFO WARNING ERROR ");
	greenColor("and if you wish to exit: ");
	yellowColor("EXIT\n ");
	while (true)
	{
		std::cin >> level;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (level == "EXIT")
			return (0);
		harl.complain(level);
		std::cout << "\n ";
		level.clear();
	}
	return (0);
}
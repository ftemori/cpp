#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <sstream>
#include <stdio.h>

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
	Weapon	weaponA, weaponB;
	std::string	input, nameA, nameB, type, temp;
	greenColor(" Please enter a name and weapon type for human A! ");
	yellowColor("<name> <weapon>\n ");

	while (true)
	{
		input.clear();
		nameA.clear();
		type.clear();
		std::getline(std::cin, input);
		std::stringstream	ss(input);
		ss.clear();
		ss >> nameA;
		ss >> type;
		if (nameA.empty() || type.empty())
		{
			redColor( " Human A must have a weapon!\n");
			greenColor(" Please enter a name and weapon type for human A! ");
			yellowColor("<name> <weapon>\n ");
			ss.clear();
		}
		else
			break ;
	}
	weaponA.setType(type);
	HumanA hA(weaponA);
	hA.setName(nameA);

	greenColor(" Please enter a name and weapon type for human B! ");
	yellowColor("<name> <weapon> (weapon is optional)\n ");
	while (true)
	{
		input.clear();
		nameB.clear();
		type.clear();
		std::getline(std::cin, input);
		std::stringstream ss(input);
		ss.clear();
		ss >> nameB;
		ss >> type;
		if (nameB.empty())
			redColor( " Human B must at least have an identity!\n ");
		else
			break ;
	}
	if (type.empty())
		weaponB.setType("none");
	else
		weaponB.setType(type);
	HumanB hB(nameB, weaponB);
	hA.attack();
	hB.attack();
	return 0;
}
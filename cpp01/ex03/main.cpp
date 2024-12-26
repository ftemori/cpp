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
	std::string	input, nameA, nameB, typeA, typeB, temp;
	greenColor(" Please enter a name and weapon type for human A! ");
	yellowColor("<name> <weapon>\n ");

	while (true)
	{
		input.clear();
		nameA.clear();
		typeA.clear();
		std::getline(std::cin, input);
		std::stringstream	ss(input);
		ss.clear();
		ss >> nameA;
		ss >> typeA;
		if (nameA.empty() || typeA.empty())
		{
			redColor( " Human A must have a weapon!\n");
			greenColor(" Please enter a name and weapon type for human A! ");
			yellowColor("<name> <weapon>\n ");
			ss.clear();
		}
		else
			break ;
	}
	HumanA hA(typeA);
	hA.setName(nameA);

	greenColor(" Please enter a name and weapon type for human B! ");
	yellowColor("<name> <weapon> (weapon is optional)\n ");
	while (true)
	{
		input.clear();
		nameB.clear();
		typeB.clear();
		std::getline(std::cin, input);
		std::stringstream ss(input);
		ss.clear();
		ss >> nameB;
		ss >> typeB;
		if (nameB.empty())
			redColor( " Human B must at least have an identity!\n ");
		else
			break ;
	}
	HumanB hB = typeB.empty() ? HumanB() : HumanB(typeB);
	hB.setName(nameB);
	hA.attack();
	hB.attack();
	return 0;
}
#include "Zombie.hpp"
#include <iostream>

void	redColor(std::string str);

void	yellowColor(std::string str)
{
	std::cout << "\033[1;" << 33 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

Zombie::Zombie(std::string &name)
{
	_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "	";
	redColor(_name);
	redColor(" got destroyed!\n");
}

void	Zombie::anounce(void)
{
	std::cout << "	";
	yellowColor(_name);
	yellowColor(": BraiiiiiiinnnzzzZ\n");
}

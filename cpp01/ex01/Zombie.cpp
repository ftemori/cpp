#include "Zombie.hpp"

void	redColor(std::string str);
void	yellowColor(std::string str);

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name)
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

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (_weapon->getType() == "none")
		std::cout << " " << _name << " is attacking without any weapon." << std::endl;
	else
		std::cout << " " << _name << " attack with their " << _weapon->getType() << std::endl;
}

HumanB::HumanB(std::string &name, Weapon &type) : _name(name), _weapon(&type) {}

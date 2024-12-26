#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (_weapon.getType() == "none")
		std::cout << " " << _name << " is attacking without any weapon." << std::endl;
	else
		std::cout << " " << _name << " attack with their " << _weapon.getType() << std::endl;
}

HumanB::HumanB(void)
{
	 _weapon.setType("none");
}

HumanB::HumanB(std::string weapon)
{
	_weapon.setType(weapon);
}

void	HumanB::setName(std::string &name)
{
	_name = name;
}
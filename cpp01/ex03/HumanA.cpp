#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << " " << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string weapon)
{
	_weapon.setType(weapon);
}

void	HumanA::setName(std::string &name)
{
	_name = name;
}
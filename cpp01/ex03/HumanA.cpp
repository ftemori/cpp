#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << " " << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(Weapon &type) : _weapon(type) {}

void	HumanA::setName(std::string &name)
{
	_name = name;
}
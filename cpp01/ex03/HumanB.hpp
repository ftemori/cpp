#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>

class	HumanB
{
private:
	std::string	_name;
	Weapon	_weapon;

public:
	HumanB(void);
	HumanB(std::string weapon);
	void	setName(std::string &name);
	void	attack(void);
};

#endif
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string &initname ) : ClapTrap(initname)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " constructed!" << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap " << _name << " destructed!" << std::endl; }

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode!" << std::endl;
}

void	ScavTrap::attack( const std::string &target )
{
	std::cout << "ScavTrap " << _name << " attacks " << target \
	<< " causing " << _attackDamage << " amount of damage." << std::endl;
}
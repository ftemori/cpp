#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string &initname ) : ClapTrap(initname)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap " << _name << " constructed!" << RESET << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << YELLOW << "ScavTrap " << _name << " destructed!" << RESET << std::endl; }

void	ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrap " << _name << " is now in gate keeper mode!" << RESET << std::endl;
}

void	ScavTrap::attack( const std::string &target )
{
	std::cout << YELLOW << "ScavTrap " << _name << " attacks " << target \
	<< " causing " << _attackDamage << " amount of damage." << RESET << std::endl;
}
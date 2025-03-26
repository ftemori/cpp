#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string &name )
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << YELLOW << "DiamondTrap " << _name << " borned!" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap() { std::cout << YELLOW << "DiamondTrap " << _name << " died!" << RESET << std::endl; }

void	DiamondTrap::attack( const std::string &target )
{
	std::cout << YELLOW << "DiamondTrap " << _name << " attacks " << target \
	<< " causing " << _attackDamage << " amount of damage." << RESET << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << YELLOW << "I am DiamondTrap " << _name << " AKA ClapTrap " << ClapTrap::_name << RESET << std::endl;
}

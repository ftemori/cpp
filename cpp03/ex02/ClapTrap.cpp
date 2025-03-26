#include "ClapTrap.hpp"

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "Claptrap " << _name << \
		" repairs itself, recovering " << amount << " hit points." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << \
		" has no energy or hit points to repair!" << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	_hitPoints -= amount;
	if (_hitPoints < 0) _hitPoints = 0;
	std::cout << "Claptrap " << _name << " takes " << \
	amount << " points of damage." << std::endl;
}

void	ClapTrap::attack( const std::string &target )
{
	if ( _hitPoints > 0 && _energyPoints > 0 )
	{
		_energyPoints--;
		std::cout << "Claptrap " << _name << " attacks " << target \
		<< " causing " << _attackDamage << " amount of damage." << std::endl;
	}
	else
	{
		std::cout << "Claptrap " << _name << \
		" does not have enough energy or hit points to attack." << std::endl;
	}
}

ClapTrap::ClapTrap( const std::string &name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Claptrap " << _name << " created!" << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << "Claptrap " << _name << " destroyed!" << std::endl; }

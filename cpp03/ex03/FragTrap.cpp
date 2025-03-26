#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string &initName ) : ClapTrap( initName )
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " initiated!" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << _name << " is requesting a high five ✋!" << std::endl;
}

void	FragTrap::attack( const std::string &target )
{
	std::cout << "FragTrap " << _name << " attacks " << target \
	<< " causing " << _attackDamage << " amount of damage." << std::endl;
}

FragTrap::~FragTrap() { std::cout << "FragTrap " << _name << " ended!" << std::endl; }
#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string &initName ) : ClapTrap( initName )
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << YELLOW << "FragTrap " << _name << " initiated!" << RESET << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << YELLOW << "FragTrap " << _name << " is requesting a high five ✋!" << RESET << std::endl;
}

void	FragTrap::attack( const std::string &target )
{
	std::cout << YELLOW << "FragTrap " << _name << " attacks " << target \
	<< " causing " << _attackDamage << " amount of damage." << RESET << std::endl;
}

FragTrap::~FragTrap() { std::cout << YELLOW << "FragTrap " << _name << " ended!" << RESET << std::endl; }
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	basic("Clappy");
	ScavTrap	intermediate("Scavy");
	FragTrap	advanced("Fraggy");

	basic.attack("Enemy1");
	intermediate.attack("Enemy2");
	advanced.attack("Enemy3");

	intermediate.guardGate();

	advanced.highFivesGuys();

	return 0;
}
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap	basic("Clappy");
	ScavTrap	intermediate("Scavy");
	FragTrap	advanced("Fraggy");
	DiamondTrap	diamond("diamond");


	basic.attack("Enemy1");
	intermediate.attack("Enemy2");
	advanced.attack("Enemy3");
	diamond.attack("Eenemy4");

	intermediate.guardGate();
	advanced.highFivesGuys();
	diamond.whoAmI();

	return 0;
}
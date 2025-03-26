#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	basic("Clappy");
	ScavTrap	intermediate("Scavy");

	basic.attack("Enemy1");
	intermediate.attack("Enemy2");

	intermediate.guardGate();

	return 0;
}
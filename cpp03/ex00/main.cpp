#include "ClapTrap.hpp"

int	main()
{
	ClapTrap robot("Clappy");

	robot.attack("Target1");
	robot.takeDamage(5);
	robot.beRepaired(3);
	robot.attack("Target2");
	robot.takeDamage(8);
	robot.beRepaired(5);

	return 0;
}
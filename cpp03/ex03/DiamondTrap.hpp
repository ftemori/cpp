#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define YELLOW "\033[33m"
#define RESET "\033[0m"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	_name;
public:
	DiamondTrap( const std::string &initName );
	~DiamondTrap();

	void	attack( const std::string &target );
	void	whoAmI();
};

#endif
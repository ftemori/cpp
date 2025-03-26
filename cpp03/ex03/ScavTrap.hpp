#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap( const std::string &initname );
	void	attack( const std::string &target );
	void	guardGate();
	~ScavTrap();
};

#endif
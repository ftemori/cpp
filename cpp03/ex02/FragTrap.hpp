#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define YELLOW "\033[33m"
#define RESET "\033[0m"

class FragTrap : public ClapTrap
{
public:
	FragTrap( const std::string &initName );
	void	attack( const std::string &target );
	void	highFivesGuys( void );
	~FragTrap();
};

#endif
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include <string>

class Brain
{
protected:
	std::string	*_ideas[100];
public:
	Brain( void );
	Brain( const Brain &prev );
	Brain	&operator=( const Brain &right );
	~Brain( void );
};

#endif
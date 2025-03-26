#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	_type;

public:
	Animal( void );
	Animal( const std::string &type );
	Animal( const Animal &prev );
	Animal	&operator=( const Animal &right );
	virtual void	makeSound( void ) const;
	std::string	getType( void ) const;
	virtual ~Animal( void );
};

#endif
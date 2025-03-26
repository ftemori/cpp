#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string	_type;

public:
	WrongAnimal( void );
	WrongAnimal( const std::string &type );
	WrongAnimal( const WrongAnimal &prev );
	WrongAnimal	&operator=( const WrongAnimal &right );
	void	makeSound( void ) const;
	std::string	getType( void ) const;
	virtual ~WrongAnimal( void );
};

#endif
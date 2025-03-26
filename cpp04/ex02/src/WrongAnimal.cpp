#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal EMPTY constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const std::string &type ) : _type( type )
{
	std::cout << "WrongAnimal constructor called & type set." << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal has no sound to play." << std::endl;
}

std::string	WrongAnimal::getType( void ) const { return _type; }

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &right )
{
	_type = right._type;
	std::cout << "WrongAnimal copy operator called." << std::endl;
	return *this;
}

WrongAnimal::WrongAnimal( const WrongAnimal &prev ) : _type( prev._type )
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal( void ) { std::cout << "WrongAnimal destructed" << std::endl; }

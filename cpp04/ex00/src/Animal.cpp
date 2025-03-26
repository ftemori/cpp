#include "../includes/Animal.hpp"

Animal::Animal( void ) : _type("ANIMAL")
{
	std::cout << "Animal EMPTY constructor called." << std::endl;
}

Animal::Animal( const std::string &type ) : _type(type)
{
	std::cout << "Animal constructor called & type set." << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << RED << "ANIMAL MAKES NO SOUND!" << RESET << std::endl;
}

std::string	Animal::getType( void ) const {	return _type; }


Animal	&Animal::operator=( const Animal &right )
{
	_type = right._type;
	std::cout << "Animal copy operator called." << std::endl;
	return *this;
}

Animal::Animal( const Animal &prev ) : _type( prev._type )
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal( void ) { std::cout << "ANIMAL destructed!" << std::endl; }
#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << GREEN << _type << " constructed!" << RESET << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << GREEN << "WrongCat 'Wof'" << RESET << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &right )
{
	if (&right != this)
		std::cout << GREEN << "WrongCat copy operator called." << RESET << std::endl;
	return *this;
}

WrongCat::WrongCat( const WrongCat &prev ) : WrongAnimal("WrongCat")
{
	if (this != &prev)
		std::cout << GREEN << "WrongCat copy constructor called." << RESET << std::endl;
}

WrongCat::~WrongCat( void ) { std::cout << GREEN << "WrongCat destructor called!" << RESET << std::endl; }
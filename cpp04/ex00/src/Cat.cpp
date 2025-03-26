#include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << YELLOW << _type << " constructed!" << RESET << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << YELLOW << "meow" << RESET << std::endl;
}

Cat	&Cat::operator=( const Cat &right )
{
	if (&right != this)
		std::cout << YELLOW << "Cat copy operator called." << RESET << std::endl;
	return *this;
}

Cat::Cat( const Cat &prev ) : Animal("Cat")
{
	if (this != &prev)
		std::cout << YELLOW << "Cat copy constructor called." << RESET << std::endl;
}

Cat::~Cat( void ) { std::cout << YELLOW << "Cat destructor called!" << RESET << std::endl; }
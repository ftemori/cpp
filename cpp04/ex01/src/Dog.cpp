#include "../includes/Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << BLUE << _type << " constructed!" << RESET << std::endl;
	_brain = new Brain();
}

void	Dog::makeSound( void ) const
{
	std::cout << BLUE << "Wof" << RESET << std::endl;
}

Dog	&Dog::operator=( const Dog &right )
{
	if (this != &right)
		std::cout << BLUE << "Dog copy operator called." << RESET << std::endl;
	_brain = new Brain();
	return *this;
}

Dog::Dog( const Dog &prev ) : Animal("Dog")
{
	if (this != &prev)
		std::cout << BLUE << "Dog copy constructor called." << RESET << std::endl;
	_brain = new Brain();
}

Dog::~Dog( void )
{
	std::cout << BLUE << "Dog destructor called!" << RESET << std::endl;
	delete _brain;
}
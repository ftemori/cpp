#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain	*_brain;

public:
	Dog( void );
	Dog( const Dog &prev );
	Dog	&operator=( const Dog &right );
	void	makeSound( void ) const;
	~Dog( void );
};

#endif
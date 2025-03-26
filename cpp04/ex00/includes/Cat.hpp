#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	Cat( const Cat &prev );
	Cat	&operator=( const Cat &right );
	void	makeSound( void ) const;
	~Cat( void );
};

#endif
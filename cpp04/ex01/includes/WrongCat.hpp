#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( const WrongCat &prev );
	WrongCat	&operator=( const WrongCat &right );
	void	makeSound( void ) const;
	~WrongCat( void );
};

#endif
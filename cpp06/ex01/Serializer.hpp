#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <cstdint>
#include "Colors.hpp"

struct	Data {
	int	value;
	std::string	name;
};

class	Serializer
{
	private:
		Serializer( void );
		Serializer( const Serializer &right );
		Serializer	&operator=( const Serializer &right );
	public:
		static uintptr_t	serialize( Data *ptr );
		static Data	*deserialize( uintptr_t raw );

};

#endif
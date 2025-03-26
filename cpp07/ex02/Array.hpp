#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template<typename T>
class	Array
{
	private:
		T	*_array;
		size_t	_size;

	public:
		Array( void );
		Array( size_t n );
		Array( const Array &other );
		~Array( void );

		Array	&operator=( const Array &other );
		T	&operator[]( size_t index );
		const T &operator[]( size_t index ) const;
		size_t	size( void ) const;
};

#include "Array.tpp"

#endif
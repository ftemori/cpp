#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
private:
	int	_fixedPoint;
	const int	_fractionalBits = 8;
public:
	Fixed();
	Fixed( const int val );
	Fixed( const float val );
};

Fixed::Fixed() {}

Fixed::Fixed( const int val ) : _fractionalBits( val * 256 ) {}

Fixed::Fixed( const float val ) : _fractionalBits( val * 256 ) {}

#endif
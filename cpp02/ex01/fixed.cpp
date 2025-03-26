#include "fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int val ) : _fixedPoint( val * 256 )
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float val ) : _fixedPoint( val * 256 )
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &prev )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = prev;
}

void	Fixed::operator=( const Fixed &prev )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = prev._fixedPoint;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float> (_fixedPoint) / (1 << _fractionalBits));
}

int	Fixed::toInt( void ) const
{
	return (_fixedPoint >> _fractionalBits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream	&operator<<( std::ostream &COUT, const Fixed &fixed )
{
	COUT << fixed.toFloat();
	return (COUT);
}

#include "fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed &prev )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = prev;
}

void	Fixed::operator=( Fixed &prev )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = prev.getRawBits();
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPoint = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


#include "fixed.hpp"

Fixed::Fixed() {} // default constructor

Fixed::Fixed( const int val ) : _fixedPoint( val * 256 ) {} // int constructor

Fixed::Fixed( const float val ) : _fixedPoint( val * 256 ) {} // float constructor

Fixed::Fixed( const Fixed &prev ) // copy constructor
{
	*this = prev;
}

void	Fixed::operator=( const Fixed &prev ) // copy assignment operator
{
	this->_fixedPoint = prev._fixedPoint;
}

float	Fixed::toFloat( void ) const // to float convertor
{
	return (static_cast<float> (_fixedPoint) / (1 << _fractionalBits));
}

int	Fixed::toInt( void ) const // to int convertor
{
	return (_fixedPoint >> _fractionalBits);
}

Fixed::~Fixed() {} // destructor

bool	Fixed::operator>( const Fixed &right ) // bigger than operator
{
	if (this->_fixedPoint > right._fixedPoint)
		return true;
	return false;
}

bool	Fixed::operator<( const Fixed &right ) // smaller than operator
{
	if (this->_fixedPoint < right._fixedPoint)
		return true;
	return false;
}

bool	Fixed::operator>=( const Fixed &right ) // bigger than and equal to operator
{
	if (this->_fixedPoint >= right._fixedPoint)
		return true;
	return false;
}

bool	Fixed::operator<=( const Fixed &right ) // smaller than and equal to operator
{
	if (this->_fixedPoint <= right._fixedPoint)
		return true;
	return false;
}

bool	Fixed::operator==( const Fixed &right ) // equal to operator
{
	if (this->_fixedPoint == right._fixedPoint)
		return true;
	return false;
}

bool	Fixed::operator!=( const Fixed &right ) // not equal to operator
{
	if (this->_fixedPoint != right._fixedPoint)
		return true;
	return false;
}

Fixed	Fixed::operator+( const Fixed &right ) // addition operator
{
	this->_fixedPoint += right._fixedPoint;
	return (*this);
}

Fixed	Fixed::operator-( const Fixed &right ) // subtraction operator
{
	this->_fixedPoint -= right._fixedPoint;
	return (*this);
}

Fixed	Fixed::operator*( const Fixed &right ) // multiplication operator
{
	this->_fixedPoint = (this->_fixedPoint * right._fixedPoint) >> this->_fractionalBits;
	return (*this);
}

Fixed	Fixed::operator/( const Fixed &right ) // devision operator
{
	this->_fixedPoint = ((this->_fixedPoint >> right._fractionalBits) / (right._fixedPoint >> right._fractionalBits)) << this->_fractionalBits;
	return (*this) ;
}

Fixed	Fixed::operator++() // pre increment operator
{
	this->_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator++( int ) // post increment operator NEEDS A DUMMY PARAMETER so the compiler knows it's post increment...
{
	Fixed	tmp(*this);
	_fixedPoint++;
	return (tmp);
}

std::ostream	&operator<<( std::ostream &COUT, const Fixed &fixed )
{
	COUT << fixed.toFloat();
	return (COUT);
}

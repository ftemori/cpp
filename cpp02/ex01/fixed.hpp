#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int	_fixedPoint;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed( const int val );
		Fixed( const float val );
		Fixed( const Fixed &prev );
		void	operator=( const Fixed &prev );
		float	toFloat( void ) const;
		int	toInt( void ) const;
		~Fixed();
};

#endif
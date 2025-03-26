#include "fixed.hpp"
std::ostream	&operator<<( std::ostream &COUT, const Fixed &fixed );

int	main( void )
{
	Fixed	a(13);
	Fixed	b(15);
	if (b >= a)
		std::cout << "b is bigger or equal to a" << std::endl;
	if (a <= b)
		std::cout << "a is smaller or equal to b" << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	if (a != b)
		std::cout << "a / b: " << b - a << std::endl;

	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;

	// return 0;
}
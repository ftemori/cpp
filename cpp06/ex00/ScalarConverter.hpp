#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

class ScalarConverter
{
	private:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter &right );
		ScalarConverter	&operator=( const ScalarConverter &right );

		static void	printConversions( char c );
		static void	printConversions( int i );
		static void	printConversions( float f );
		static void	printConversions( double d );
	public:
		static void	convert( const std::string &literal );

};


#endif


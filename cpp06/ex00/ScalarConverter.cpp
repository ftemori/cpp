#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( const ScalarConverter &right ) { (void)right; }

ScalarConverter	&ScalarConverter::operator=( const ScalarConverter &right ) { (void)right; return *this; }

void	ScalarConverter::printConversions( double d )
{
	std::cout << "char: ";
	if (d >= 32 && d <= 126)
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "Non-displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::printConversions( float f )
{
	std::cout << "char:";
	if (f >= 32 && f <= 126)
		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "Non-displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	ScalarConverter::printConversions( int i )
{
	std::cout << "char: ";
	if (i >= 32 && i <= 126)
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Non-displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	ScalarConverter::printConversions( char c )
{
	std::cout << "char: ";
	if (isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non-displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	handlePseudoLiterals( const std::string &literal )
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (literal == "-inff" || literal == "+inff" || literal == "nanf") {
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal.substr(0, literal.length() - 1) << std::endl;
	} else {
		std::cout << "float: " << "f" << std::endl;
		std::cout << "double: " << std::endl;
	}
}

void	ScalarConverter::convert( const std::string &literal )
{
	if (literal == "-inff" || literal == "+inff" || literal == "nanf" || literal == "-inf" \
	|| literal == "+inf" || literal == "nan" || literal == "inf" || literal == "inff") {
		handlePseudoLiterals(literal);
		return ;
	}

	char	*endPtr;
	double	value = strtod(literal.c_str(), &endPtr);

	if (endPtr[0] == '\0') {	// int or double
		if (literal.find('.') != std::string::npos) {
			printConversions(static_cast<double>(value));
		} else {
			printConversions(static_cast<int>(value));
		}
	} else if (endPtr[0] == 'f' && endPtr[1] == '\0' && literal != "f")	// float
		printConversions(static_cast<float>(value));
	else if (literal.length() == 1 || (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')) {	// char
		char	c = (literal.length() == 1) ? literal[0] : literal[1];
		printConversions(c);
	}
	else
		std::cout << "Invalid input" << std::endl;
}
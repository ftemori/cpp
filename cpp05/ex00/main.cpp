#include "Bureaucrat.hpp"

int	main( void )
{
	try {
		Bureaucrat	b("wrong", 160);
	}
	catch(std::out_of_range &e) {
		std::cout << "Execption: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	b("correct", 150);
		std::cout << b;
		--b;
	}
	catch(std::out_of_range &e) {
		std::cout << "Execption: " << e.what() << std::endl;
	}
}
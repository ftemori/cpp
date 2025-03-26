#include "Intern.hpp"

int	main( void )
{
	std::cout << std::endl;
	Intern someRandomIntern;
	AForm	*rrf;

	rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
	if (rrf)
		delete rrf;
	
	std::cout << std::endl;
	return 0;
}
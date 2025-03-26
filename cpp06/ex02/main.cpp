#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Colors.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate( void )
{
	std::srand(std::time(0));

	int	random = std::rand() % 3;

	switch (random) {
		case 0: return new A();
		case 1: return new B();
		case 2: return new C();
	}
	return nullptr;
}

void	identefy( Base *p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void	identefy( Base &p )
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch ( ... ) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		} catch ( ... ) {
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			} catch ( ... ) {
				std::cout << "Unknown type" << std::endl;
			}
		}
	}
}

int	main( void )
{
	std::cout << std::endl;

	Base	*instance = generate();

	std::cout << BLUE << "Type from pointer: " << RESET;
	identefy(instance);

	std::cout << BLUE << "Type from reference: " << RESET;
	identefy(*instance);

	delete instance;
	std::cout << std::endl;
	return 0;
}

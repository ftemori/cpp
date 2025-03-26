#include "RPN.hpp"
#include "Colors.hpp"

int	main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << RED << "Usage: './RPN <reverse polish notation expression>'!" << RESET << std::endl;
		return 1;
	}
	try {
		RPN	rpn;
		std::cout << BLUE << rpn.calculate(av[1]) << RESET << std::endl;
	} catch (std::exception &e) {
		std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
		return 1;
	}
	return 0;
}
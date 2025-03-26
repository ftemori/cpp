#include "./headers/BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "Usage: './btc inputfile.csv'" << std::endl;
		return 1;
	}
	std::string	file = av[1];
	try {
		BitcoinExchange	btc("data.csv");
		btc.processInput(av[1]);
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}
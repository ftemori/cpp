#include <iomanip>
#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << RED << "Usage: ./PmergeMe <sequence of positive integers>" << RESET << std::endl;
		return 1;
	}

	std::vector<int>	vec;
	std::deque<int>		deq;
	std::istringstream	ss(av[1]);
	int	num;

	try {
		while (ss >> num) {
			if (ss.fail() || num < 0)
				throw std::runtime_error("Error: invalid input!");
			deq.push_back(num);
			vec.push_back(num);
		}
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
		return 1;
	}

	std::cout << GREEN << "Before: ";
	for (size_t i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << RESET << std::endl;

	std::clock_t	startVec = std::clock();
	mergeInsertSort(vec);
	std::clock_t	endVec = std::clock();
	double	timeVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1e6;

	std::clock_t	startDeq = std::clock();
	mergeInsertSort(deq);
	std::clock_t	endDeq = std::clock();
	double	timeDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1e6;

	std::cout << GREEN << " After: ";
	for (size_t i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << RESET << std::endl;

	std::cout << BLUE << "Time with 'std::vector': " << std::fixed << std::setprecision(6) << timeVec << " us" << RESET << std::endl;
	std::cout << BLUE << "Time with 'std::Deque' : " << std::fixed << std::setprecision(6) << timeDeq << " us" << RESET << std::endl;

	return 0;
}
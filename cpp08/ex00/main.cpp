#include "easyfind.hpp"
#include <vector>
#include <list>

int	main()
{
	int	arr[] = {1, 2, 3, 6, 4, 5};
	std::vector<int>	vec(arr, arr + sizeof(arr) / sizeof(arr[0])); 
	try {
		std::vector<int>::iterator	it = easyfind(vec, 3);
		std::cout << "Value found: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::list<int>	lst(arr, arr + sizeof(arr) / sizeof(arr[0]));
	try {
		std::list<int>::iterator	iit = easyfind(lst, 6);
		std::cout << "value found: " << *iit << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
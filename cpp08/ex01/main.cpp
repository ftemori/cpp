#include "Span.hpp"
#include <iostream>
#include "Colors.hpp"
#include <list>
#include <iostream>

int	main()
{
	Span	first(4);

	try {
		first.addNumber(21);
		first.addNumber(20);
		first.addNumber(6);
		first.addNumber(1);
		// first.addNumber(7);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << BLUE << "first Shortest span is: " << first.shortestSpan() << RESET << std::endl;
		std::cout << BLUE << " first longest span is: " << first.longestSpan() << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << "first Exception: " << e.what() << RESET << std::endl;
	}
	// first.print();

	// Span	second(10000);
	// std::vector<int>	numbers;

	// for (size_t i = 0; i < 10000; i++) {
	// 	numbers.push_back(i);
	// }

	// try {
	// 	second.addNumbers(numbers.begin(), numbers.end());
	// 	std::cout << BLUE << "second Shortest span is: " << second.shortestSpan() << RESET << std::endl;
	// 	std::cout << BLUE << " second longest span is: " << second.longestSpan() << RESET << std::endl;
	// }
	// catch (std::exception &e) {
	// 	std::cout << RED << "second Exception: " << e.what() << RESET << std::endl;
	// }

	Span	second(10000);
	std::list<int>	numbers;

	for (size_t i = 0; i < 10000; i++) {
		numbers.push_back(i);
	}

	try {
		second.addNumbers(numbers.begin(), numbers.end());
		std::cout << BLUE << "second Shortest span is: " << second.shortestSpan() << RESET << std::endl;
		std::cout << BLUE << " second longest span is: " << second.longestSpan() << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << "second Exception: " << e.what() << RESET << std::endl;
	}
}
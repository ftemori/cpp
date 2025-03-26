#include "Array.hpp"
#include "Colors.hpp"

int	main( void )
{
	Array<int>	emptyArray;
	std::cout << BLUE << "Size of the empty array: " << emptyArray.size() << RESET << std::endl;

	Array<int>	intArray(5);
	std::cout << BLUE << "Size of the int array: " << intArray.size() << RESET << std::endl;

	for (size_t i = 0; i < intArray.size(); i++) {
		intArray[i] = i * 10;
	}

	std::cout << BLUE << "Int array elements: " << RESET << std::endl;
	for (size_t i = 0; i < intArray.size(); i++) {
		std::cout << intArray[i] << " ";
	}
	std::cout << BLUE << std::endl;

	Array<int>	copiedArray(intArray);
	std::cout << BLUE << "Size of copied Array: " << copiedArray.size() << RESET << std::endl;

	std::cout << BLUE << "Copied array elements: " << RESET << std::endl;
	for (size_t i = 0; i < copiedArray.size(); i++) {
		std::cout << copiedArray[i] << " ";
	}
	std::cout << BLUE << std::endl;

	copiedArray[0] = 100;
	std::cout << BLUE << "Modified copiedArray[0]: " << copiedArray[0] << RESET << std::endl;	// out of bound test can done here ...
	std::cout << BLUE << "IntArray[0] remains unchanged: " << intArray[0] << RESET << std::endl;

	Array<std::string>	stringArray(3);
	stringArray[0] = "hello";
	stringArray[1] = "world";
	stringArray[2] = "template!";
	std::cout << BLUE << "String array elements: " << RESET << std::endl;
	for (size_t i = 0; i < stringArray.size(); i++) {
		std::cout << stringArray[i] << " ";
	}
	std::cout << std::endl;
}
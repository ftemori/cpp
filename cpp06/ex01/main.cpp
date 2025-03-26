#include "Serializer.hpp"

int	main( void )
{
	std::cout << std::endl;
	Data	data = {42, "test"};

	std::cout << BLUE << "  Original address: " << &data << RESET << std::endl;

	uintptr_t	serialized = Serializer::serialize(&data);
	std::cout << BLUE << "  Serialized value: " << serialized << RESET << std::endl;

	Data	*deserialized = Serializer::deserialize(serialized);
	std::cout << BLUE << "Deserialized value: " << deserialized << RESET << std::endl;

	if (deserialized == &data)
		std::cout << GREEN << "The serialization and deserialization executed successfully!" << RESET << std::endl;
	else
		std::cout << RED << "The process was unfortunately unsuccessful!" << RESET << std::endl;

	std::cout << BLUE << "Data value: " << data.value << RESET << std::endl;
	std::cout << BLUE << "Data name : " << data.name << RESET << std::endl;
	std::cout << std::endl;

	return 0;
}
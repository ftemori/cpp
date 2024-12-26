#include <iostream>
#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie	*newZombie(std::string &name);

void	redColor(std::string str)
{
	std::cout << "\033[1;" << 31 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

void	greenColor(std::string str)
{
	std::cout << "\033[1;" << 32 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

int	main(void)
{
	std::string	name;
	greenColor("	1. Creating zombie on the stack!\n");
	std::cout << " Zombie name: ";
	std::cin >> name;

	Zombie	zombie1(name);
	zombie1.anounce();

	greenColor("	2. Creating zombie on the heap!\n");
	std::cout << " zombie name: ";
	std::cin >> name;

	Zombie	*zombie2 = newZombie(name);
	zombie2->anounce();
	delete zombie2;

	greenColor("	3. Calling randomchump()!\n");
	randomChump("random");
	return 0;
}
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

void	yellowColor(std::string str) {
	std::cout << "\033[1;" << 33 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

void	redColor(std::string str) {
	std::cout << "\033[1;" << 31 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

void	greenColor(std::string str) {
	std::cout << "\033[1;" << 32 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

int	main(void)
{
	std::string	names;
	int	n;
	greenColor(" Please enter the number of zombies!\n");
	std::cout << " ->     ";
	std::cin >> n;
	if (n < 1) {
		redColor(" no zombies created!\n");
		return (0);
	}
	greenColor(" Please enter the names of the zombies!");
	yellowColor(" <name> <separated by a space> <name>\n");
	std::cout << " ->     ";
	std::cin.ignore();
	while (!getline(std::cin, names) || names.empty()) {
		redColor(" Please enter a name!\n ->     ");
	}
	Zombie	*zombies = zombieHorde(n, names);
	for (int i = 0; i< n; i++)
		zombies[i].anounce();
	std::cout << std::endl;
	delete []zombies;
	return (0);
}
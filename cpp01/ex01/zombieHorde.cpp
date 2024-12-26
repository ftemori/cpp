#include "Zombie.hpp"
#include <sstream>

void	redColor(std::string str);
void	greenColor(std::string str);

void	trimString(std::string str)
{
	int	end = str.length() - 1;
	int	start = 0;
	while (start <= end && isspace(str[start]))
		start++;
	str.erase(0, start);
	end = str.length() - 1;
	while (end >= 0 && isspace(str[end]))
		end--;
	str.erase(end + 1);
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombies = new Zombie[N];
	std::stringstream	ss(name);
	std::string	zName;
	std::string	def = "Default";

	for (int i = 0; i < N; i++) {
		ss >> std::ws;
		if (std::getline(ss, zName, ' '))
		{
			if (zName.empty())
				new (&zombies[i]) Zombie(def);
			else
				new (&zombies[i]) Zombie(zName);
		} else {
			new (&zombies[i]) Zombie(def);
		}
	}
	return (zombies);
}
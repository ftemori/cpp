#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		ac = 1;
		while (av[ac])
		{
			while (av[ac][i])
			{
				std::cout << (char)toupper(av[ac][i]);
				i++;
			}
			i = 0;
			ac++;
		}
	}
	std::cout << std::endl;
	return (0); 
}
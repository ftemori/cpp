#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"

int	main()
{
	Animal	*arr[6];
	for (int i = 0; i < 6; i++)
	{
		if (i < 5)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}
	Dog	dd;
	Dog	ddd(dd);

	for (int i = 0; i < 6; i++) {
		delete arr[i];
	}
	std::cout << "===============================================================" << std::endl;

	const Animal	*d = new Dog();
	const Animal	*c = new Cat();

	delete d;
	delete c;

	return 0;
}
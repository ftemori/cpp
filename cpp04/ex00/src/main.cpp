#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"

int	main()
{
	const Animal* metaa = new Animal();
	const Animal* jj = new Dog();
	const WrongAnimal* ii = new WrongCat();
	std::cout << jj->getType() << " " << std::endl;
	std::cout << ii->getType() << " " << std::endl;
	ii->makeSound(); //will output the cat sound!
	jj->makeSound();
	metaa->makeSound();

	delete metaa;
	delete jj;
	delete ii;

	std::cout << "===============================================================" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	return 0;
}
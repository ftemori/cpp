#include <iostream>
#include "MutantStack.hpp"
#include <list>
#include "Colors.hpp"

int	main()
{
	MutantStack<int>	mStack;

	mStack.push(5);
	mStack.push(42);

	std::cout << BLUE << "Top element: " << mStack.top() << RESET << std::endl;

	mStack.pop();

	std::cout << BLUE << "Stack size after pop: " << mStack.size() << RESET << std::endl;

	mStack.push(9);
	mStack.push(8);
	mStack.push(1);
	mStack.push(2);
	mStack.push(6);

	for (MutantStack<int>::iterator i = mStack.begin(); i != mStack.end(); i++)
		std::cout << YELLOW << *i << RESET << std::endl;

	std::cout << BLUE << "Top element: " << mStack.top() << RESET << std::endl;
	std::cout << BLUE << "Stack size now: " << mStack.size() << RESET << std::endl;
}

// int main()
// {
// 	std::list<int> mstack;
// 	mstack.push_back(5);
// 	mstack.push_back(17);
// 	std::cout << mstack.back() << std::endl;
// 	mstack.pop_back();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	// std::stack<int> s(mstack);	// standard stack does not have a constructor that takes a list
// 	return 0;
// }

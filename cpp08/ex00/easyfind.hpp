#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>

template<typename T>
typename T::iterator	easyfind(T &arr, int value)
{
	typename T::iterator	it = find(arr.begin(), arr.end(), value);
	if (it == arr.end())
		throw std::runtime_error("Value not found inside the provided container!");
	return it;
}

#endif
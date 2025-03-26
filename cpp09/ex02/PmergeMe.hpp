#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstddef>
#include <stdexcept>
#include <sstream>
#include "Colors.hpp"

template <typename Container>
void	printarr(Container arr) {
	size_t	i = 0;
	std::cout << "array: ";
	while (i < arr.size()) {
		std::cout << arr[i] << " ";
		i++;
	}
	std::cout << std::endl;
}

template <typename Container>
void	mergeInsertSort(Container &arr)
{
	if (arr.size() < 2)
		return ;

	for (size_t i = 0; i < arr.size() - 1; i += 2) {
		if (arr[i] > arr[i + 1])
			std::swap(arr[i], arr[i + 1]);
	}

	Container	largerElements;
	for (size_t i = 1; i < arr.size(); i += 2) {
		largerElements.push_back(arr[i]);
	}
	mergeInsertSort(largerElements);

	Container	sortedArr;
	for (size_t i = 0; i < largerElements.size(); ++i) {
		sortedArr.push_back(largerElements[i]);
		int	smallerElemnt = arr[2 * i];
		typename Container::iterator insertPos = std::lower_bound(sortedArr.begin(), sortedArr.end(), smallerElemnt);
		sortedArr.insert(insertPos, smallerElemnt);
	}
	
	if (arr.size() % 2 != 0) {
		int	lastElement = arr[arr.size() - 1];
		typename Container::iterator insertPos = std::lower_bound(sortedArr.begin(), sortedArr.end(), lastElement);
		sortedArr.insert(insertPos, lastElement);
	}
	arr = sortedArr;
}

#endif
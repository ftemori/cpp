#include "Span.hpp"

Span::~Span() {}

Span::Span(unsigned int N) : _N(N) {}

void	Span::addNumber(const int value)
{
	if (_arr.size() == _N || _N == 0)
		throw std::overflow_error("The container cannot store more values!");
	_arr.push_back(value);
}

int	Span::shortestSpan() const
{
	if (_arr.size() < 2)
		throw std::logic_error("Not enough elements to calculate a span!");
	

	std::vector<int>::iterator	first, second;
	std::vector<int>	sortedArr = _arr;
	std::sort(sortedArr.begin(), sortedArr.end());
	first = sortedArr.begin();
	second = sortedArr.begin();
	int	minSpan = sortedArr[1] - sortedArr[0];

	while (first != sortedArr.end()) {
		while (second != sortedArr.end()) {
			if (minSpan > (*first - *second) && (*first - *second) > 0)
				minSpan = *first - *second;
			second++;
		}
		second = sortedArr.begin();
		first++;
	}
	return minSpan;
}

int	Span::longestSpan() const
{
	if (_arr.size() < 2)
		throw std::logic_error("Not enough elements to calculate a span!");

	std::vector<int>	sortedArr = _arr;
	std::sort(sortedArr.begin(), sortedArr.end());

	return sortedArr[sortedArr.size() - 1] - sortedArr[0];
}
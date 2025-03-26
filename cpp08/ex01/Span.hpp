#ifndef SPAN_HPP
#define SPAN_HPP

#include <stdexcept>
#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>

class	Span
{
	private:
		std::vector<int>	_arr;
		unsigned int	_N;

	public:
		Span(unsigned int N);
		~Span();
		void	addNumber(const int value);
		int	shortestSpan() const;
		int	longestSpan() const;

		template <typename Iterator>
		void	addNumbers(Iterator begin, Iterator end);
		// void	print() {
		// 	for (size_t i = 0; i < _arr.size(); i++)
		// 	{
		// 		std::cout << _arr[i] << std::endl;
		// 	}
		// }
};

template <typename Iterator>
void	Span::addNumbers(Iterator begin, Iterator end)
{
	size_t	newSize = std::distance(begin, end);

	if (newSize + _arr.size() > _N)
		throw std::overflow_error("The container cannot store all values!");
	_arr.insert(_arr.end(), begin, end);
}

#endif
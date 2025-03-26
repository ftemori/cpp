#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iostream>

class	RPN
{
	private:
		std::string	_expression;
		std::stack<int>	_stack;
	public:
		RPN();
		RPN(const std::string &expression);
		int	calculate();
		int	calculate(const std::string &expression);
};

#endif
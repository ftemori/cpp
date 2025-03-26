#include "RPN.hpp"

int	RPN::calculate(const std::string &expression)
{
	_expression = expression;
	return this->calculate();
}

bool	validExpression(const std::string &expression)
{
	int	number = 0;
	int	operators = 0;
	for (size_t i = 0; i < expression.length(); i++)
	{
		if (isdigit(expression[i]))
			number++;
		else if (expression[i] == '/' || expression[i] == '*' || expression[i] == '-' || expression[i] == '+')
			operators++;
		else if (expression[i] != ' ')
			return false;
	}
	if (number != operators + 1)
		return false;
	return true;
}

int	processExpression(const std::string &exp, std::stack<int> &s)
{
	std::istringstream	ss(exp);
	std::string	token;
	while (ss >> token) {
		if (token == "/" || token == "*" || token == "-" || token == "+") {
			if (s.size() < 2)
				throw std::runtime_error("Insufficient operands for operator " + token);

			int	operand2 = s.top();
			s.pop();
			int	operand1 = s.top();
			s.pop();

			if (token == "+")
				s.push(operand1 + operand2);
			else if (token == "-")
				s.push(operand1 - operand2);
			else if (token == "*")
				s.push(operand1 * operand2);
			else if (token == "/") {
				if (operand2 == 0)
					throw std::runtime_error("Division by zero!");
				s.push(operand1 / operand2);
			}
		} else {
			int	num = atoi(token.c_str());
			s.push(num);
		}
	}
	if (s.size() != 1)
		throw std::runtime_error("Invalid expression!");
	return s.top();
}

int	RPN::calculate()
{
	if (!validExpression(_expression))
		throw std::logic_error("Wrong expression!");
	return processExpression(_expression, _stack);

}

RPN::RPN() {}

RPN::RPN(const std::string &expression) : _expression(expression) {}
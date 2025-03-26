#include "Bureaucrat.hpp"

std::ostream	&operator<<( std::ostream &COUT, const Bureaucrat &right )
{
	COUT << GREEN << right.getName() << ", bureaucrat grade " << right.getGrade() << "." << RESET << std::endl;
	return COUT;
}

bool	catchExecption( int grade )
{
	if (grade < 1)
		throw std::out_of_range("GradeTooHighException");
	else if (grade > 150)
		throw std::out_of_range("GradeTooLowException");
	else
		return true;
	return false;
}

Bureaucrat::Bureaucrat( Bureaucrat &prev ) : _name(prev.getName())
{
	if (catchExecption(prev.getGrade()))
		this->_grade = prev.getGrade();
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat &prev )
{
	if (this == &prev)
		return *this;

	// _name = prev.getName();		the Name can not be reassigned.
	_grade = prev.getGrade();
	return *this;
}

void	Bureaucrat::operator--( void )
{
	if (catchExecption( _grade + 1 ))
		_grade += 1;
}

void	Bureaucrat::operator++( void )
{
	if (catchExecption( _grade - 1 ))
		_grade -= 1;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ) {
	if (catchExecption( grade ))
		_grade = grade;
}

std::string	Bureaucrat::getName( void ) const {
	return _name;
}

int	Bureaucrat::getGrade( void ) const {
	return _grade;
}

Bureaucrat::~Bureaucrat( void ) {}

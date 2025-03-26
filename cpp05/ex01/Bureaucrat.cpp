#include "Bureaucrat.hpp"
#include "Form.hpp"

std::ostream	&operator<<( std::ostream &COUT, const Bureaucrat &right )
{
	COUT << GREEN << right._name << ", bureaucrat grade " << right._grade << "." << RESET;
	return COUT;
}

void	Bureaucrat::signForm( Form &form )
{
	try 
	{
		form.beSigned( *this );
		std::cout << GREEN << _name << " has signed the " << form.getName() << RESET << std::endl;
	}
	catch ( const std::exception &e )
	{
		std::cout << RED << _name << " couldn't sign the " << form.getName() << " because " << e.what() << RESET << std::endl;
	}
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

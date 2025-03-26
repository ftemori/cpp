#include "Form.hpp"

bool	catchExecption( int grade, int b )
{
	if (grade < 1)
		throw std::out_of_range("GradeTooHighException");
	else if (grade > b)
		throw std::out_of_range("GradeTooLowException");
	else
		return true;
	return false;
}

void	Form::beSigned( const Bureaucrat &b )
{
	if (catchExecption( b.getGrade(), _gradeToSign ))
		_sign = true;
}

std::ostream	&operator<<( std::ostream &COUT, Form &right )
{
	COUT << BLUE << right.getName();
	if (right.getSign())
		COUT << " IS signed. ";
	else
		COUT << " is NOT signed. ";
	COUT << "Grade to sign: " << right.getGradeToSign() << " and grade to execute: "\
	<< right.getGradeToExecute() << "." << RESET;
	return COUT;
}

int	Form::getGradeToSign( void ) {
	return _gradeToSign;
}

int	Form::getGradeToExecute( void ) {
	return _gradeToExecute;
}

bool	Form::getSign( void ) {
	return _sign;
}

std::string	Form::getName( void ) {
	return _name;
}

Form::Form( const std::string name, int grade) : _name( name ), _sign( false ), _gradeToSign( grade ), _gradeToExecute( 0 ) {
	catchExecption( grade, 150 );
}

Form::~Form( void ) {}

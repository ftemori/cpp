#include "AForm.hpp"

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

void	AForm::beSigned( const Bureaucrat &b )
{
	if (catchExecption( b.getGrade(), _gradeToSign ))
		_sign = true;
}

std::ostream	&operator<<( std::ostream &COUT, AForm &right )
{
	COUT << BLUE << right.getName();
	if (right.getSign())
		COUT << " IS signed. ";
	else
		COUT << " is NOT signed. ";
	COUT << "Grade to sign: " << right.getGradeToSign() << " and grade to execute: "\
	<< right.getGradeToExecute() << "." << RESET << std::endl;
	return COUT;
}

int	AForm::getGradeToSign( void ) const {
	return _gradeToSign;
}

int	AForm::getGradeToExecute( void ) const {
	return _gradeToExecute;
}

bool	AForm::getSign( void ) const {
	return _sign;
}

std::string	AForm::getName( void ) const {
	return _name;
}

void	AForm::checkExecution( const Bureaucrat &executor ) const
{
	if (!getSign())
		throw std::out_of_range("Grade too low to sign!");
	if (executor.getGrade() > getGradeToExecute())
		throw std::out_of_range("Grade too low to execute!");
}

AForm::AForm( const std::string name, int grade ) : _name( name ), _sign( false ), _gradeToSign( grade ), _gradeToExecute( 0 ) {
	catchExecption( grade, 150 );
}

AForm::AForm( const std::string name, int gts, int gte ) : _name( name ), _sign( false ), _gradeToSign( gts ), _gradeToExecute( gte ) {
	catchExecption( gts, 150 );
	catchExecption( gte, 150 );
}

AForm::~AForm( void ) {}

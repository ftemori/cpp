#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class	Form
{
private:
	const std::string	_name;
	bool	_sign;
	const int	_gradeToSign;
	const int	_gradeToExecute;

public:
	Form( const std::string name, int grade );
	~Form( void );
	std::string	getName( void );
	bool	getSign( void );
	int	getGradeToSign( void );
	int	getGradeToExecute( void );
	// std::ostream	&operator<<( std::ostream &COUT, Form &right );
	void	beSigned( const Bureaucrat &b );
};

std::ostream	&operator<<( std::ostream &COUT, Form &right );

#endif
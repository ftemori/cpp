#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
// #include "Form.hpp"	// Including 2 files inside of each other is problematic. It creates an infinite loop
#include "Colors.hpp"
class AForm;		// instead just add the declaration

class Bureaucrat
{
private:
	const std::string	_name;
	int	_grade;

public:
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat &prev );
	std::string	getName( void ) const;
	int	getGrade( void ) const;
	Bureaucrat	&operator=( Bureaucrat &prev );
	void	operator++( void );
	void	operator--( void );
	friend std::ostream	&operator<<( std::ostream &COUT, const Bureaucrat &right );
	void	executeForm( const AForm &form );
	void	signForm( AForm &form );
	~Bureaucrat( void );
};

#endif
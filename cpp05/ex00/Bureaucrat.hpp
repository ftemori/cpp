#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Colors.hpp"

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
	~Bureaucrat( void );
};

#endif
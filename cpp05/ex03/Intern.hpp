#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern( const Intern &right );
		Intern	&operator=( const Intern &right );
		~Intern();

		AForm	*makeForm( std::string formName, std::string target );
};

#endif
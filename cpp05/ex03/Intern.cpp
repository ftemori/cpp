#include "Intern.hpp"

Intern::Intern( const Intern &right ) { (void)right; }

Intern	&Intern::operator=( const Intern &right ) { (void)right; return *this; }

Intern::Intern() {}

Intern::~Intern() {}

AForm	*makeShrubby(std::string t) { return new ShrubberyCreationForm(t); };
AForm	*makeRobotomy(std::string t) { return new RobotomyRequestForm(t); };
AForm	*makePresidential(std::string t) { return new PresidentialPardonForm(t); };

AForm	*Intern::makeForm( std::string formName, std::string target )
{
	struct	FormPair {
		std::string	name;
		AForm	*(*create)(std::string);
	};

	FormPair forms[] = {
		{"Shrubbery Creation", makeShrubby},
		{"Robotomy Request", makeRobotomy},
		{"Presidential Pardon", makePresidential}
	};

	for (int i = 0; i < 3; i++)
	{
		if (forms[i].name == formName) {
			std::cout << BLUE << "Intern creates " << formName << RESET << std::endl;
			return forms[i].create(target);
		}
	}

	std::cout << "Error: form name '" << formName << "' does not exist!" << std::endl;
	return 0;
}
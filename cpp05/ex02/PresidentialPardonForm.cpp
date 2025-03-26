#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &prev ) : AForm("PresidentialPardonForm", 25, 5), _target(prev._target) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm &prev ) {
	(void)prev;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute( const Bureaucrat &executor ) const
{
	checkExecution( executor );
	std::cout << _target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}
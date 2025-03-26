#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm &prev );
		PresidentialPardonForm	&operator=( PresidentialPardonForm &prev );
		~PresidentialPardonForm();
		void	execute( const Bureaucrat &executor ) const;
};

#endif
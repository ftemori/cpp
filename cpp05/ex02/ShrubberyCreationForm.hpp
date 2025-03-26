#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "fstream"

class	ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm &prev );
		ShrubberyCreationForm	&operator=( ShrubberyCreationForm &prev );
		~ShrubberyCreationForm();
		void	execute( const Bureaucrat &executor ) const;
};

#endif
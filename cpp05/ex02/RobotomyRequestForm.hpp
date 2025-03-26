#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm &prev );
		RobotomyRequestForm	&operator=( RobotomyRequestForm &prev );
		~RobotomyRequestForm();
		void	execute( const Bureaucrat &executor ) const;
};

#endif
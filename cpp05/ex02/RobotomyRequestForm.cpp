#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &prev ) : AForm("RobotomyRequestForm", 72, 45), _target(prev._target) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm &prev ) {
	(void)prev;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute( const Bureaucrat &executor ) const
{
	checkExecution( executor );

	std::cout << "Bzzzz... Drilling noices... 🛠️" << std::endl;

	std::srand(std::time(0));
	if (std::rand() % 2 == 0)
		std::cout << _target << " has been successfully robotomized! 🤖✅" << std::endl;
	else
		std::cout << "Robotomy failed on " << _target << "! ❌" << std::endl;
}
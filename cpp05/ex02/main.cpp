#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main( void )
{
	std::cout << std::endl;
	try {
		Bureaucrat bureaucrat("John", 50);  // High enough grade for all forms
			// Shrubbery test
		ShrubberyCreationForm shrubForm("home");
		std::cout << "Before signing: " << shrubForm;
		bureaucrat.signForm(shrubForm);  // Bureaucrat signs the form
		std::cout << "After signing: " << shrubForm;
		bureaucrat.executeForm(shrubForm);  // Bureaucrat executes the form
			// Robotomy test
		RobotomyRequestForm robotomyForm("Target1");
		std::cout << "Before signing: " << robotomyForm;
		bureaucrat.signForm(robotomyForm);  // Bureaucrat signs the form
		std::cout << "After signing: " << robotomyForm;
		bureaucrat.executeForm(robotomyForm);  // Bureaucrat executes the form
			// Presidential test
		PresidentialPardonForm pardonForm("Target2");
		std::cout << "Before signing: " << pardonForm;
		bureaucrat.signForm(pardonForm);  // Bureaucrat signs the form
		std::cout << "After signing: " << pardonForm;
		bureaucrat.executeForm(pardonForm);  // Bureaucrat executes the form

	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	// Test with low-grade Bureaucrat
	try {
		Bureaucrat lowGradeBureaucrat("LowGrade", 150);

		// Attempt to sign and execute a form but fails
		ShrubberyCreationForm lowGradeForm("garden");
		lowGradeBureaucrat.signForm(lowGradeForm);
		lowGradeBureaucrat.executeForm(lowGradeForm);

	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	return 0;
}
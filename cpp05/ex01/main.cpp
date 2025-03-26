#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	std::cout << std::endl;
	try {
		Bureaucrat	c("wrong", 150);
		--c;
		std::cout << c << std::endl;
	}
	catch(std::out_of_range &e) {
		std::cout << "Execption: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	b("correct", 2);
		++b;
		std::cout << b << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << "Execption: " << e.what() << std::endl;
	}

	try {
		Bureaucrat boss("Boss", 1);
		Bureaucrat employee("Employee", 50);
		Form taxForm("Tax Form", 20);

		std::cout << taxForm << std::endl;

		boss.signForm(taxForm);  // ✅ Should succeed
		std::cout << taxForm << std::endl;

		employee.signForm(taxForm);  // ❌ Should fail (grade too low)
		// taxForm.beSigned(employee); // shouldn't work
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
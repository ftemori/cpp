#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm( "ShrubberyCreationForm", 145, 137 ), _target( target ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &prev ) : AForm("ShrubberyCreationForm", 145, 137), _target(prev._target) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm &prev ) {
	(void)prev;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
{
	checkExecution( executor );
	
	std::ofstream	file((_target + "_shrubbery").c_str());
	if (!file) {
		std::cerr << "Error: could not create the output file!" << std::endl;
		return ;
	}

	file << "       /\\ \n"
		"      /  \\ \n"
		"     /    \\ \n"
		"    /      \\ \n"
		"   / ______ \\ \n"
		"      |||| \n"
		"      |||| \n"
		"      |||| \n"
		"     /||||\\ \n"
		"    -------- \n";
	file.close();
	std::cout << "Shrubbery has been planted at " << _target << "! 🌳✅" << std::endl;
}
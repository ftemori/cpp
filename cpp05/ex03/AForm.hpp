#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

class	 AForm
{
	private:
		const std::string	_name;
		bool	_sign;
		const int	_gradeToSign;
		const int	_gradeToExecute;

	public:
		AForm( const std::string name, int grade );
		AForm( const std::string name, int gts, int gte );
		virtual	~AForm( void );
		std::string	getName( void ) const;
		bool	getSign( void ) const;
		int	getGradeToSign( void ) const;
		int	getGradeToExecute( void ) const;
		void	checkExecution( const Bureaucrat &executor ) const;
		void	beSigned( const Bureaucrat &b );
		virtual void	execute( const Bureaucrat &executor ) const = 0;
};

std::ostream	&operator<<( std::ostream &COUT, AForm &right );

#endif
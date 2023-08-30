#include "Bureaucrat.h"

int main( void )
{
	try {
		Bureaucrat bureaucrat("ali", 145);
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		bureaucrat.decrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
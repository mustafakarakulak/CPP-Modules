/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 02:24:28 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/01 02:24:28 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	try {
		Bureaucrat bureaucrat("Ali", 54324);
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		bureaucrat.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat bureaucrat("Mehmet", -54324);
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		bureaucrat.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat bureaucrat("Ayse", 23);
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		bureaucrat.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 02:23:25 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/01 02:39:33 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return("Grade too High!");
};

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return("Grade too Low!");
};

Bureaucrat::Bureaucrat( const std::string& name, int grade ) : _name(name), _grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& src ) : _name(src._name), _grade(src._grade) {
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& rhs ) {
	if ( this != &rhs )
		_grade = rhs.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void    Bureaucrat::incrementGrade() {
	if ( (_grade - 1) < 1 )
		throw Bureaucrat::GradeTooLowException();
	_grade--;
}

void    Bureaucrat::decrementGrade() {
	if ( (_grade + 1) > 150 )
		throw Bureaucrat::GradeTooHighException();
	_grade++;
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs ) {
	o << rhs.getName() << ", bureaucrat grade => " << rhs.getGrade();
	return o;
}

void    Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << "The bureaucrat" << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "The bureaucrat" << " cannot sign " << form.getName()
			<< " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.execute(*this);
        std::cout << form.getName() << " executed" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << form.getName() << " not executed" << std::endl;
    }
}
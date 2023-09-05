/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 02:24:16 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/01 02:24:21 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string   _name;
		int                 _grade;

	public:
		Bureaucrat( const std::string& name, int grade );
		Bureaucrat( const Bureaucrat& src );
		~Bureaucrat();
		Bureaucrat& operator=( const Bureaucrat& rhs );

		std::string getName() const;
		int         getGrade() const;

		void        incrementGrade();
		void        decrementGrade();

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );

#endif
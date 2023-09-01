/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 02:45:57 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/01 02:47:55 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){};

Intern::~Intern(){};

void    Intern::makeForm(std::string str1,
        std::string str2){
    if (str1 == "ShrubberyCreationForm")
        std::cout << "Intern creates " << str1 << std::endl;
    else if (str1 == "RobotomyRequestForm")
        std::cout << "Intern creates " << str1 << std::endl;
    else if (str1 == "PresidentialPardonForm")
        std::cout << "Intern creates " << str1 << std::endl;
    else
        std::cout << "Intern can't create " << str1 <<
        " because it's not a valid form" << std::endl;
}
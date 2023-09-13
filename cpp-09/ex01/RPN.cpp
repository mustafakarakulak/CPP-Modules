/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:39:58 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/13 15:39:59 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isOperator(char op)
{
	if (op == '+' || op == '-' || op == '/' || op == '*')
		return true;
	return false;
}

int opertion(int a, int b, char op)
{
	if (op == '+')
		return (b + a);
	if (op == '-')
		return (b - a);
	if (op == '*')
		return (a * b);
	if (op == '/')
	{
		if (a == 0)
		{
			std::cout << "Error: division by zero." << std::endl;
			exit(1);
		}
		return (b / a);
	}
	return 0;
}

bool isValidNumber(char nb)
{
	if (nb >= '0' && nb <= '9')
		return true;
	return false;
}
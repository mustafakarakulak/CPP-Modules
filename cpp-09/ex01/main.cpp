/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:39:31 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/19 21:13:24 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	argument_checker(int ac, char **av){
	if (ac != 2)
		return false;
	if (!av || !av[1] || av[1][0] == '\0')
		return false;
	for (int i = 0; av[1][i]; i++){
		if (isdigit(av[1][i]))
			return true;
	}
	return false;
}

int main(int ac, char **av){
	std::stack<int> rpn;
	if (argument_checker(ac, av) == false)
	{
		std::cout << "Error: invalide argument." << std::endl;
		return (1);
	}
	int a, b;
	for (int i = 0; av[1][i]; i++)
	{
		if (isOperator(av[1][i]))
		{
			if (rpn.size() < 2)
			{
				std::cout << "Error: invalide argument." << std::endl;
				return (1);
			}
			a = rpn.top();
			rpn.pop();
			b = rpn.top();
			rpn.pop();
			rpn.push(opertion(a, b, av[1][i]));
		}
		else if (isValidNumber(av[1][i]))
		{
			if (isValidNumber(av[1][i + 1]))
			{
				std::cout << "Error" << std::endl;
				return (1);
			}
			rpn.push(av[1][i] - 48);
		}
		else if (av[1][i] != ' ')
		{
			std::cout << "Error" << std::endl;
			return (1);
		}
	}
	std::cout << rpn.top() << std::endl;
}

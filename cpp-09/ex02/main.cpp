/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:40:17 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/20 14:05:03 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	argument_checker(char *av){
	for (int c = 0; av[c]; c++){
		if (!isdigit(av[c]) && av[c] != '+' && av[c] != 32){
			std::cout << "Error: wrong usage." << std::endl <<
			"e.g.| ./PMergeMe 5 4 +3 2 +1" << std::endl;
			return (false);
		}
	}
	return true;
}

int main(int ac, char **av)
{
	if (ac <= 1){
		std::cout << "Error: invalide argument." << std::endl;
		return (1);
	}
	for (int c = 1; av[c]; c++){
			if (argument_checker(av[c]) == false)
				return (1);
	}
	std::vector<int> data;
	std::deque<int> data2;
	int nb;
	for (int i = 1; i < ac; i++)
	{
		nb = atoi(av[i]);
		data2.push_back(nb);
		data.push_back(nb);
	}
	sortNum(data, data2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:40:17 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/13 15:40:17 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{

	if (ac <= 1)
	{
		std::cout << "Error: invalide argument." << std::endl;
		return (1);
	}
	std::vector<int> data;
	std::deque<int> data2;
	int nb;
	for (int i = 1; i < ac; i++)
	{
		if (isdigit(av[i][0]) == 0)
		{
			std::cout << "Error: invalide argument." << std::endl;
			return (1);
		}
		nb = atoi(av[i]);
		if (nb < 0)
		{
			std::cout << "Error: invalide argument." << std::endl;
			return (1);
		}
		data2.push_back(nb);
		data.push_back(nb);
	}
	sortNum(data, data2);
}

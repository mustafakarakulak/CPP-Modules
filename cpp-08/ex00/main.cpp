/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:00:27 by mkarakul          #+#    #+#             */
/*   Updated: 2023/09/04 17:47:38 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> a;
	a.push_back(0);
	a.push_back(2);
	a.push_back(-3);
	a.push_back(11);
	a.push_back(5);
	a.push_back(6);

	try
	{
		int pos = easyfind(a, 11);
		int pos2 = easyfind(a, 0);
		std::cout << "element found at position " << pos << std::endl;
		std::cout << a[pos] << std::endl;
		std::cout << "element found at position " << pos2 << std::endl;
		std::cout << a[pos2] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "element not found" << std::endl;
	}
}
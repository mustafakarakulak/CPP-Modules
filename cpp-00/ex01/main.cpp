/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:07:17 by mkarakul          #+#    #+#             */
/*   Updated: 2023/08/05 18:28:38 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
	std::string line;
	PhoneBook *phoneBook = new PhoneBook();

	phoneBook->welcome();
	while (std::cout << "$> ",std::getline(std::cin, line))
	{
		if (line == "SEARCH")
			phoneBook->searchContact();
		else if (line == "ADD")
			phoneBook->addContact();
		else if (line == "EXIT")
		{
			std::cout << "exit" << std::endl;
			break;
		}
		else if (std::cin.eof())
			break;
		std::cin.clear();
	}
	std::cin.clear();

	delete phoneBook;
	return (0);
}
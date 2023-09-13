/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:43:36 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/13 14:31:33 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	std::map<std::string, double> btc;
	std::string	line;
	std::string	date;
	std::string	value;
	std::ifstream	file(av[1]);
	if (file.is_open() == 0)
	{
		std::cout << "Error: could not open file." << std::endl;
		exit(1);
	}
	btc = readcsv();
	getline(file, line);
	while (getline(file, line))
	{
		std::stringstream lineStream(line);
		if (getline(lineStream, date, '|') && getline(lineStream, value))
		{
			date.erase(date.find_last_not_of(" \t") + 1);
			double val = std::atof(value.c_str());
			if (val < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else if (val > 1000)
				std::cout << "Error: too large a number." << std::endl;
			else if (checkfloat(value) == false)
				std::cout << "Error: bad value input." << std::endl;
			else if (isValideDate(date) == false)
				std::cout << "Error: bad date input => " << date << std::endl;
			else
			{
				if (btc.find(date) != btc.end())
					std::cout << date << " => " << val << " = " << val * btc.at(date) << std::endl;
				else
					low_bound(btc, date, val);
			}
		}
		else
			std::cout << "Error: bad input => " << date << std::endl;
	}
	return (0);
}

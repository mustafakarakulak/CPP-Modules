/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:43:36 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/13 15:29:48 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, double> readcsv()
{
	std::map<std::string, double> btc;
	std::string line;
	std::ifstream file("data.csv");
	std::string	valueStr;
	std::string	dateStr;

	if (file.is_open() == 0)
	{
		std::cout << "Error: Opening file" << std::endl;
		exit(1);
	}
	getline(file, line);
	while(getline(file, line))
	{
		std::stringstream lineStream(line);
		if (getline(lineStream, dateStr, ',') && getline(lineStream, valueStr))
			btc[dateStr] = atof(valueStr.c_str());
	}
	file.close();
	return btc;
}

void	low_bound(std::map<std::string, double> btc, std::string date, double val){
		std::map<std::string, double>::iterator it = btc.lower_bound(date);
		if (it != btc.begin())
			it--;
		std::cout << date << " => " << val << " = " << val * it->second << std::endl;
}

bool isValideDate(std::string date)
{
	if (date.length() != 10)
		return false;
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());

	if (day > 31 || month > 12)
		return false;
	if (year == 1582 && month == 10 && (day >= 5 && day <= 14))
		return false;
	if (year % 4 != 0 && month == 2 && day > 28)
		return false;
	else if (year % 4 == 0 && month == 2 && day > 29)
		return false;
	return true;
}

bool checkfloat(std::string value)
{
	for (size_t i = 0; i < value.length(); i++)
	{
		if (value[i] == '.')
		{
			if(value[i + 1] == '.')
				return false;
			return true;
		}
	}
	return true;
}

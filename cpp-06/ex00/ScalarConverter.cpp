/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:52:30 by mkarakul          #+#    #+#             */
/*   Updated: 2023/09/02 20:16:49 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>

ScalarConverter::ScalarConverter() {
	std::cout << "Default constructor called" << std::endl;
}
ScalarConverter::~ScalarConverter() {
	std::cout << "Destructor called" << std::endl;
}

void ScalarConverter::toChar(std::string s)
{
	int i;
	char c;
	std::stringstream ss(s);

	if (ss >> i)
	{
		if (i >= 0 && i <= 127)
		{
			c = static_cast<char>(i);
			if (c < 32 || c > 126)
				std::cout << "char: Non displayable\n";
			else
				std::cout << "char: '" << c << "'" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}

void ScalarConverter::toInt(std::string s)
{
	int i;
	std::stringstream ss(s);

	if (ss >> i)
	{
		i = static_cast<int>(std::stoi(s));
		std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int: impossible" << std::endl;
}

void ScalarConverter::toFloat(std::string s)
{
	float f;
	std::stringstream ss(s);
	if (ss >> f)
	{
		f = static_cast<float>(std::stof(s));
		if (f - static_cast<int>(f) == 0)
			std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;
	}
	else
		std::cout << "float:  impossible" << std::endl;
}

void ScalarConverter::toDouble(std::string s)
{
	double d;
	std::stringstream ss(s);

	if (ss >> d)
	{
		d = static_cast<double>(std::stod(s));
		if (d - static_cast<int>(d) == 0)
			std::cout << "double: " << d << ".0" << std::endl;
		else
			std::cout << "double: " << d << std::endl;
	}
	else
		std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::handlePseudoLiterals(std::string s)
{
	if (s == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (s == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (s == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

void ScalarConverter::convert(std::string s)
{
	int i = 0;
	toChar(s);
	toInt(s);
	std::string pseudo[3] = {"-inff", "+inff", "nanf"};
	while (i < 3)
	{
		if (s == pseudo[i])
		{
			handlePseudoLiterals(s);
			return;
		}
		i++;
		if (i == 3)
		{
			if (s[s.size() - 1] == 'f')
				s.erase(s.size() - 1);
			toFloat(s);
			toDouble(s);
		}
	}
}
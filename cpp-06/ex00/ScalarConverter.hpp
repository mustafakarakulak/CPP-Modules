/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:52:30 by mkarakul          #+#    #+#             */
/*   Updated: 2023/09/02 19:55:33 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>

class ScalarConverter
{
	ScalarConverter();
	~ScalarConverter();

public:
	static void toInt(std::string s);
	static void toChar(std::string s);
	static void toFloat(std::string s);
	static void convert(std::string s);
	static void toDouble(std::string s);
	static void handlePseudoLiterals(std::string s);
};

std::pair<std::string, std::string> findValueType(const std::string& input);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:43:36 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/06 16:53:01 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <sstream>
# include <string>

std::map<std::string, double> readcsv();
bool    isValideDate(std::string date);
bool    checkfloat(std::string value);
void    getResult(std::map<std::string, double> &btc);
void	low_bound(std::map<std::string, double> btc, std::string date, double val);

#endif
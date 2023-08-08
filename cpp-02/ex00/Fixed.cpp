/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:33:15 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/09 01:28:51 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(f.getRawBits());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &f2)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(f2.getRawBits());
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_RawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_RawBits = raw;
}

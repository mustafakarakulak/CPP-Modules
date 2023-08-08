/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 01:30:22 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/09 01:30:22 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_RawBits;
		static const int	_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &f);
		Fixed	&operator=(const Fixed &f2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed(const int integer);
		Fixed(const float floating_point);

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &f);

#endif
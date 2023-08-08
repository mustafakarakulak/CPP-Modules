/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 01:28:56 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/09 01:28:57 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					_RawBits;
		static const int	_bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &f);
		~Fixed();
		Fixed	&operator=(const Fixed &f2);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
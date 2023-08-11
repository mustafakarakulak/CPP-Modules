/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:23:10 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/11 18:23:11 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class	FragTrap: public ClapTrap
{
	public:
	
		FragTrap();
		FragTrap(const std::string	&Name);
		FragTrap(FragTrap &fragTrap);
		~FragTrap();
		FragTrap	&operator=(FragTrap &fragTrap2);

		void	attack(std::string const & target);
		void	highFivesGuys(void);
};

#endif
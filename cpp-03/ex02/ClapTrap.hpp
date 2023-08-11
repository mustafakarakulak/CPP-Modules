/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:23:24 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/11 19:18:44 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	protected:

		std::string	_Name;
		int			_Hitpoints;
		int			_EnergyPoints;
		int			_AttackDamage;
	
	public:

		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap &clapTrap);
		~ClapTrap();
		ClapTrap			&operator=(ClapTrap const &clapTrap2);

		std::string			&getName();
		void				setName(std::string &Name);
		int					&getHitpoints();
		void				setHitpoints(int Hitpoints);
		int					&getEnergyPoints();
		void				setEnergyPoints(int EnergyPoints);
		int					&getAttackDamage();
		void				setAttackDamage(int AttackDamage);

		void				attack(std::string const & target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
};

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap);

#endif
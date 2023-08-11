/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:48:29 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/11 18:05:30 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Ali("Ali");
	ClapTrap	Ejderha("Ejderha");
	ClapTrap	ClapTrapC(Ali);
	ClapTrap	x;

	std::cout << x << std::endl;
	std::cout << std::endl;
	std::cout << ClapTrapC << std::endl;
	std::cout << std::endl;

	std::cout << Ali << "\n" << Ejderha << std::endl;
	Ali.attack("Ejderha");
	Ejderha.takeDamage(Ali.getAttackDamage());

	std::cout << std::endl;
	std::cout << Ali << "\n" << Ejderha << std::endl;

	Ejderha.beRepaired(5);
	std::cout << std::endl;
	std::cout << Ali << "\n" << Ejderha << std::endl;
	return (0);
}


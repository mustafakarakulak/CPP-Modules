/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:24:05 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/11 19:17:31 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	ScavTrapA("ScavTrapA");
	ScavTrap	ScavTrapB("ScavTrapB");

	std::cout << std::endl;

	std::cout << ScavTrapA << "\n" << ScavTrapB << std::endl;

	ScavTrapA.attack("ScavTrapB");
	ScavTrapB.takeDamage(ScavTrapA.getAttackDamage());

	std::cout << std::endl;

	std::cout << ScavTrapA << "\n" << ScavTrapB << std::endl;

	ScavTrapB.beRepaired(5);

	std::cout << std::endl;

	std::cout << ScavTrapA << "\n" << ScavTrapB << std::endl;

	ScavTrapB.guardGate();

	std::cout << std::endl;
	return (0);
}

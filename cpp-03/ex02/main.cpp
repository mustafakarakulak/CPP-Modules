/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:23:02 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/11 18:30:01 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	FragTrapA("FragTrapA");
	FragTrap	FragTrapB("FragTrapB");

	std::cout << std::endl;

	std::cout << FragTrapA << "\n" << FragTrapB << std::endl;

	FragTrapA.attack("FragTrapB");
	FragTrapB.takeDamage(FragTrapA.getAttackDamage());

	std::cout << std::endl;

	std::cout << FragTrapA << "\n" << FragTrapB << std::endl;

	FragTrapB.beRepaired(5);

	std::cout << std::endl;

	std::cout << FragTrapA << "\n" << FragTrapB << std::endl;

	FragTrapB.highFivesGuys();

	std::cout << std::endl;

	return (0);
}

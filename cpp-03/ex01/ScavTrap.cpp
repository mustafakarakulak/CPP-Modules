/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:23:59 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/11 19:13:27 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default SCAVTRAP constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name)
{
	std::cout << "SCAVTRAP constructor called" << std::endl;
	setHitpoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap &scavTrap)
{
	std::cout << "SCAVTRAP copy constructor called" << std::endl;
	*this = scavTrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAVTRAP destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap &scavTrap)
{
	if (this != &scavTrap)
	{
		std::cout << "SCAVTRAP assignation operator called" << std::endl;
		this->setName(scavTrap.getName());
		this->setHitpoints(scavTrap.getHitpoints());
		this->setEnergyPoints(scavTrap.getEnergyPoints());
		this->setAttackDamage(scavTrap.getAttackDamage());
	}
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << this->getName() << " has attacked " << target << ", " << "causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout  << this->getName() << " has entered in Gate keeper mode." << std::endl;
}

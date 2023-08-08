/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:26:38 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/08 02:14:23 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon tabanca = Weapon("tabanca");
		HumanA Ali("Ali", tabanca);
		Ali.attack();
		tabanca.setType("some other type of tabanca");
		Ali.attack();
	}
	{
		Weapon tufek = Weapon("tüfek");
		HumanB veli("Veli");
		veli.setWeapon(tufek);
		veli.attack();
		tufek.setType("some other type of tufek");
		veli.attack();
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:52:30 by mkarakul          #+#    #+#             */
/*   Updated: 2023/09/02 19:36:06 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"

Base::~Base() {}

Base *generate(void)
{
	int rand = std::rand() % 3 + 1;
	std::string  str[3] = {"A", "B", "C"};
	std::cout << "Generated " << str[rand - 1] << std::endl;
	if (rand == 1)
		return new A();
	else if (rand == 2)
		return new B();
	else
		return new C();
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (const std::bad_cast &)
	{
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch (const std::bad_cast &)
	{
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch (const std::bad_cast &)
	{
	}
}
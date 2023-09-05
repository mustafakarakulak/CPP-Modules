/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:00:27 by mkarakul          #+#    #+#             */
/*   Updated: 2023/09/04 16:38:57 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	std::list<int> lst;

	mstack.push(5);
	mstack.push(17);
	lst.push_back(5);
	lst.push_back(17);

	std::cout << mstack.top() << std::endl;
	std::cout << lst.back() << std::endl;

	mstack.pop();
	lst.pop_back();

	std::cout << mstack.size() << std::endl;
	std::cout << lst.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();

	++it;
	--it;

	++lit;
	--lit;
	std::cout << "-----------------------" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "-----------------------" << std::endl;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	std::stack<int> s(mstack);
	std::list<int> l(lst);

	return 0;
}

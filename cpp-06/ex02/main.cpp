/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:52:30 by mkarakul          #+#    #+#             */
/*   Updated: 2023/09/02 15:35:01 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	std::srand(std::time(0));

	Base *randPtr = generate();
	identify(randPtr);
	delete randPtr;

	Base &randRef = *generate();
	identify(randRef);
}
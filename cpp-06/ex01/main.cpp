/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:52:30 by mkarakul          #+#    #+#             */
/*   Updated: 2023/09/02 19:37:27 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data ob(321);
	Data *originalPtr = &ob;
	uintptr_t serialPtr = Serializer::serialize(originalPtr);
	Data *deserialPtr = Serializer::deserialize(serialPtr);
	if (deserialPtr == originalPtr)
	{
		std::cout << "Serialization and deserialization successful!\n";
		std::cout << "Original Pointer: " << originalPtr << std::endl;
		std::cout << "Deserialized Pointer: " << deserialPtr << std::endl;
		std::cout << "Value: " << deserialPtr->value << std::endl;
	}
	else
		std::cout << "Serialization and deserialization failed!\n";
}
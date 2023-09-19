/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:00:27 by mkarakul          #+#    #+#             */
/*   Updated: 2023/09/05 17:00:32 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>

template <typename T>
int easyfind(T a, int i)
{

	typename T::iterator it = std::find(a.begin(), a.end(), i);
	if (it != a.end())
		return std::distance(a.begin(), it);
	else
		throw std::exception();
}

#endif
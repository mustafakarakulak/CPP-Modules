/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:23:46 by mkarakul          #+#    #+#             */
/*   Updated: 2023/09/03 16:27:10 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <ostream>
#include <string>

template <typename T>
void    swap(T &a, T &b)
{
    T swap = a;
    a = b;
    b = swap;
}

template <typename T>
T &min(T &a, T &b)
{
    return a>b ? b:a;
}

template <typename T>
T &max(T &a, T &b)
{
    return a>b ? a:b;
}

#endif

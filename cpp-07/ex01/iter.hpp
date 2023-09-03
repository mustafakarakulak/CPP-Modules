/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:12:23 by mkarakul          #+#    #+#             */
/*   Updated: 2023/09/03 18:51:02 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, int length, void (*f)(T const &)){
    for (int i = 0; i < length; i++)
        f(array[i]);
}


template <typename T>
void    print(T const &x){
    std::cout << x << std::endl;
}

#endif
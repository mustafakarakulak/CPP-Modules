/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:22:59 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/13 18:24:43 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;

public:
    Animal( void );
    Animal( std::string type );

    /*
        Virtual destructor:
        A virtual destructor is used to free up the memory space allocated by 
        the derived class object or instance while deleting instances of the derived
        class using a base class pointer object. A base or parent class destructor
        use the virtual keyword that ensures both base class and the derived class 
        destructor will be called at run time, but it called the derived class first
        and then base class to release the space occupied by both destructors.

        Every destructor down gets called no matter what. virtual makes sure it
        starts at the top instead of the middle.

        Virtual destructors are useful when you might potentially delete an instance 
        of a derived class through a pointer to base class:
    */
    virtual ~Animal( void );

    Animal( const Animal& src );
    Animal& operator=( const Animal& rhs );

    virtual void    makeSound( void ) const;
    std::string     getType( void ) const; 
};

#endif
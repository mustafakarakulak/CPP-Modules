/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 01:33:35 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/13 01:33:35 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal( void );
        Animal( std::string type );
        virtual ~Animal( void );

        Animal( const Animal& src );
        Animal& operator=( const Animal& rhs );

        virtual void    makeSound( void ) const;
        std::string     getType( void ) const; 
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:23:52 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/13 18:25:07 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal( void );
    WrongAnimal( std::string type );
    ~WrongAnimal( void );

    WrongAnimal( const WrongAnimal& src );
    WrongAnimal& operator=( const WrongAnimal& rhs );

    void            makeSound( void ) const;
    std::string     getType( void ) const; 
};

#endif
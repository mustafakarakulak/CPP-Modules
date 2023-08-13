/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:45:00 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/13 18:25:21 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
private:
    Brain   *_brain;

public:
    Cat( void );
    ~Cat( void );

    Cat( const Cat& src );
    Cat& operator=( const Cat& src );

    void   makeSound( void ) const;
};

#endif
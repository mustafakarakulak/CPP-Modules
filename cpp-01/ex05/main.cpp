/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 02:26:50 by mustafakara       #+#    #+#             */
/*   Updated: 2023/08/08 02:26:51 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen *k = NULL;

	k->complain("DEBUG");
	k->complain("INFO");
	k->complain("WARNING");
	k->complain("ERROR");

	delete k;
	return (0);
}

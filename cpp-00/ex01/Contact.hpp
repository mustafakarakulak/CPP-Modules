/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:05:35 by mkarakul          #+#    #+#             */
/*   Updated: 2023/08/05 18:08:33 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
# define CONTACT_HPP_

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <csignal>
#include <climits>

class Contact {
	public:
		Contact();
		~Contact();
		int setInformation(int index);
		void tableDisplay();
		void fullDisplay();

	private:
		static const int FIELDS_CNT = 5;
		enum fields {
			firstName = 0,
			lastName,
			nickname,
			phone,
			darkestSecret
		};

		int index;
		std::string fieldsInfo[FIELDS_CNT];
};

#endif
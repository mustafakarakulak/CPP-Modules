/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:06:59 by mkarakul          #+#    #+#             */
/*   Updated: 2023/08/05 18:23:32 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void addContact(void);
		void searchContact();
		void welcome(void) const;

	private:
		static const int MAX_CONTACTS = 8;
		int newContactIndex;
		int contactAmount;
		Contact *contacts[MAX_CONTACTS];
};

#endif

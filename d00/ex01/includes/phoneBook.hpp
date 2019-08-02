/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:24:19 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/15 20:24:20 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"
# include "utils.hpp"

# define MAX_CONTACTS 8
# define NUMBER_OF_CONTACT_CATAGORIES 11
# define CONTACT_CATAGORIES (const char*[NUMBER_OF_CONTACT_CATAGORIES]) {"First Name", "Last Name", "Nickname", "Login", "Postal Address", "Email Address", "Phone Number", "Birthday", "Favorite Meal", "Underwear Color", "Darkest Secret"}

class PhoneBook
{
	private:
		Contact contacts[MAX_CONTACTS];
		int currentIndex;
	
	private:
		void setContactFirstName(void);

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void newContact(void);
		void displayBasicContactInfo(void);
		void searchAndDisplayContactInfo(void);
};

#endif

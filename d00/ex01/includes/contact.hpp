/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:24:16 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/15 20:24:17 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _login;
		std::string _postalAddress;
		std::string _emailAddress;
		std::string _phoneNumber;
		std::string _birthday;
		std::string _favoriteMeal;
		std::string _underwearColor;
		std::string _darkestSecret;
	
	public:
		Contact(void);
		~Contact(void);

		// Setters
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickname(std::string nickname);
		void setLogin(std::string login);
		void setPostalAddress(std::string postalAddress);
		void setEmailAddress(std::string emailAddress);
		void setPhoneNumber(std::string phoneNumber);
		void setBirthday(std::string birthday);
		void setFavoriteMeal(std::string favoriteMeal);
		void setUnderwearColor(std::string underwearColor);
		void setDarkestSecret(std::string darkestSecret);

		// Getters
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickname(void) const;
		std::string getLogin(void) const;
		std::string getPostalAddress(void) const;
		std::string getEmailAddress(void) const;
		std::string getPhoneNumber(void) const;
		std::string getBirthday(void) const;
		std::string getFavoriteMeal(void) const;
		std::string getUnderwearColor(void) const;
		std::string getDarkestSecret(void) const;

		void displayContactInfo(void) const;
};

#endif

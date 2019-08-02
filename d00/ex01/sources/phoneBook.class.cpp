/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:24:06 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/15 20:24:08 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook(void) : currentIndex(0)
{
	// std::cout << "PhoneBook created!" << std::endl;
	return ;
}

void PhoneBook::newContact(void)
{
	std::string input;
	std::string prompt;

	if (currentIndex < MAX_CONTACTS)
	{
		for (int i = 0; i < NUMBER_OF_CONTACT_CATAGORIES; i++)
		{
			prompt.clear();
			prompt.append("Enter Contacts ").append(CONTACT_CATAGORIES[i]).append(": ");
			input = getInputFromUserAsString(prompt);
			switch (i)
			{
				case 0: contacts[currentIndex].setFirstName(input); break;
				case 1: contacts[currentIndex].setLastName(input); break;
				case 2: contacts[currentIndex].setNickname(input); break;
				case 3: contacts[currentIndex].setLogin(input); break;
				case 4: contacts[currentIndex].setPostalAddress(input); break;
				case 5: contacts[currentIndex].setEmailAddress(input); break;
				case 6: contacts[currentIndex].setPhoneNumber(input); break;
				case 7: contacts[currentIndex].setBirthday(input); break;
				case 8: contacts[currentIndex].setFavoriteMeal(input); break;
				case 9: contacts[currentIndex].setUnderwearColor(input); break;
				case 10: contacts[currentIndex].setDarkestSecret(input); break;
			}
		}
		currentIndex += 1;
	}
	else
		std::cout << "Contact list is full" << std::endl;
}

void PhoneBook::displayBasicContactInfo(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;

	for (int i = 0; i < currentIndex; i++)
	{
		firstName = contacts[i].getFirstName();
		lastName = contacts[i].getLastName();
		nickName = contacts[i].getNickname();
		if (firstName.length() > 9)
			firstName.at(9) = '.';
		if (lastName.length() > 9)
			lastName.at(9) = '.';
		if (nickName.length() > 9)
			nickName.at(9) = '.';
		printf("|%10d|%10.10s|%10.10s|%10.10s|\n", i + 1, firstName.c_str(), lastName.c_str(), nickName.c_str());
	}
}

void PhoneBook::searchAndDisplayContactInfo(void)
{
	std::string input;
	int index;

	if (currentIndex < 1)
	{
		std::cout << "No saved contacts" << std::endl;
		return ;
	}
	input = getInputFromUserAsString("Enter a contact index: ");
	if (stringIsDigit(input) == false)
	{
		std::cout << "Error: \'" << input << "\': " << " Not a valid index" << std::endl;
		return ;
	}
	index = std::stoi(input);
	if (index >= 1 && index <= currentIndex)
		contacts[index - 1].displayContactInfo();
	else
		std::cout << "Error: No saved contact at index: " << index << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook destroyed!" << std::endl;
}

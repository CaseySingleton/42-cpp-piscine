/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:24:02 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/15 20:24:02 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phoneBook.hpp"

#define DISPLAY_HELP "  Add - Adds a new contact\n  Search - Search through existing contacts\n  Exit - Exits program"

void			string_to_lower(std::string str)
{
	for (int i = 0; i < str.length(); i++)
		str.at(i) = tolower(str.at(i));
}

int				main(void)
{
	std::string	input;
	PhoneBook	phoneBook;

	std::cout << "Type \'HELP\' to display commands" << std::endl;
	while (1)
	{
		input = getInputFromUserAsString("PHONEBOOK >> ");
		if (input == "exit")
			break ;
		else if (input == "add")
			phoneBook.newContact();
		else if (input == "search")
		{
			phoneBook.displayBasicContactInfo();
			phoneBook.searchAndDisplayContactInfo();
		}
		else if (input == "help")
			std::cout << DISPLAY_HELP << std::endl;
		else
			std::cout << "\'" << input << "\': Invalid command. Use \'HELP\' to see available commands" << std::endl;
	}
	return (0);
}

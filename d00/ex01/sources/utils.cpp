/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:24:10 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/15 20:24:11 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool		stringIsAlpha(std::string str)
{
	for (int i = 0; i < str.length(); i++)
		if (isalpha(str.at(i)) == 0)
			return (false);
	return (true);
}

bool		stringIsDigit(std::string str)
{
	return (std::all_of(str.begin(), str.end(), ::isdigit));
}

std::string	getInputFromUserAsString(std::string prompt)
{
	std::string input;

	while (1)
	{
		input.clear();
		std::cout << prompt;
		std::getline(std::cin, input);
		if (input.length() == 0)
			continue ;
		for (unsigned i = 0; i < input.length(); i++)
			input[i] = tolower(input[i]);
		if (input == "exit")
			exit(1);
		return (input);
	}
}

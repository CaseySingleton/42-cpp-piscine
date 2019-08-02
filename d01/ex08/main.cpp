/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:23:25 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 21:23:25 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

std::string	getStringInput(std::string prompt)
{
	std::string input;
	std::string temp;

	while (1)
	{
		temp.clear();
		std::cout << prompt;
		std::getline(std::cin, input);
		temp = input;
		std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
		if (temp == "exit")
			exit(1);
		if (input.length() == 0)
			continue ;
		return (input);
	}
}

int			main(void)
{
	std::string help("Attacks: meleeAttack | rangedAttack | intimidatingShout");
	std::string prompt("CHOOSE AN ATTACK >> ");
	std::string attacks[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	std::string input;
	Human player;

	std::cout << help << std::endl;
	while (1)
	{
		input = getStringInput(prompt);
		if (input == "help")
			std::cout << help << std::endl;
		for (int i = 0; i < 3; i++)
		{
			if (input == attacks[i])
			{
				player.action(input, "Dave");
				break ;
			}
		}
	}
	return (0);
}

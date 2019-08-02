/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:58:59 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/09 12:59:00 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int				main(void)
{
	srand(time(0));
	std::list<int> myList;
	int index;

	for (int i = 0; i < 30; i++)
	{
		myList.push_back((rand() % 30));
		// myList.push_back(i);
	}

	try
	{
		index = easyfind(myList, 12);
		std::cout << "Value: " << 12 << " found at index: " << index << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value: " << 12 << " not in list" << std::endl;
	}

	try
	{
		index = easyfind(myList, -1);
		std::cout << "Value: " << -1 << " found at index: " << index << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value: " << -1 << " not in list" << std::endl;
	}

	try
	{
		index = easyfind(myList, 0);
		std::cout << "Value: " << 0 << " found at index: " << index << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value: " << 0 << " not in list" << std::endl;
	}

	try
	{
		index = easyfind(myList, 29);
		std::cout << "Value: " << 29 << " found at index: " << index << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value: " << 29 << " not in list" << std::endl;
	}
	return (0);
}

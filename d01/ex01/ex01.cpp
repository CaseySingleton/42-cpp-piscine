/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:07:25 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 17:07:26 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// void				memoryLeak(void)
// {
// 	std::string*	panthere = new std::string("String panthere");

// 	std::cout << *panthere << std::endl;
// }

void				memoryLeak(void)
{
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete(panthere); // Don't forget to call delete() if you call new()
}

int					main(void)
{
	memoryLeak();
	while (1)
		;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:18:00 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 15:18:01 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
	return ;
}

Peon::Peon(std::string const & name) : Victim(name)
{
	setName(name);
	std::cout << "Zog zog" << std::endl;
	return ;
}

Peon::Peon(Peon const & src)
{
	*this = src;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

// Operators
Peon & Peon::operator=(Peon const & rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
	}
	return (*this);
}

// Methods
void Peon::getPolymorphed(void) const
{
	std::cout << getName() << " has been turned into a pink pony !" << std::endl;
	return ;
}

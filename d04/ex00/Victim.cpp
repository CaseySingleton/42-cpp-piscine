/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:17:49 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 15:17:49 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::Victim(std::string const & name)
{
	setName(name);
	std::cout << "Some random victim called " << getName() << ", just popped !" << std::endl;
	return ;
}

Victim::Victim(Victim const & src)
{
	*this = src;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << getName() << " just died for no apparent reason !" << std::endl;
}

// Operators
Victim & Victim::operator=(Victim const & rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, const Victim & s)
{
	o << "I am " << s.getName() << ", and I like otters !" << std::endl;

	return (o);
}

// Methods
void Victim::getPolymorphed(void) const
{
	std::cout << getName() << " has been turned into a cute little sheep !" << std::endl;
	return ;
}

// Setters
void Victim::setName(std::string const & name)
{
	_name = name;
	return ;
}

// Getters
std::string Victim::getName(void) const
{
	return (_name);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:20:59 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:20:59 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	setType("Ice");
	setXP(0);
}

Ice::Ice(Ice const & src)
{
	*this = src;
}

Ice::~Ice(void)
{
	return ;
}

// Operators

Ice & Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
	{
		setType(rhs.getType());
		setXP(rhs.getXP());
	}
	return (*this);
}

// Methods

AMateria * Ice::clone() const
{
	AMateria * clone = new Ice(*this);

	return (clone);
}

void Ice::use(ICharacter & target)
{
	std::cout << "* fires a frost bolt at " << target.getName() << " *" << std::endl;
	setXP(getXP() + 10);
	// std::cout << getType() << " XP: " << getXP() << std::endl;
}

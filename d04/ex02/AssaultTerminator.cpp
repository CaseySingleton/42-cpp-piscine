/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:55:30 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 22:55:31 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space * " << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
	*this = src;
	std::cout << "* teleports from space * " << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back ..." << std::endl;
}

/*
**	Operators
*/

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
	if (this != &rhs)
	{
		;
	}
	return (*this);
}

/*
**	Methods
*/

ISpaceMarine * AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator);
}

void AssaultTerminator::battleCry(void) const
{
	std::cout << "* This code is unclean. PURIFY IT ! *" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}


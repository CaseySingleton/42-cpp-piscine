/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:21:12 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:21:13 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	setType("Cure");
	setXP(0);
}

Cure::Cure(Cure const & src)
{
	*this = src;
}

Cure::~Cure(void)
{
	return ;
}

// Operators
Cure & Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
	{
		setType(rhs.getType());
		setXP(rhs.getXP());
	}
	return (*this);
}

// Methods
AMateria * Cure::clone() const
{
	AMateria * clone = new Cure(*this);

	return (clone);
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	setXP(getXP() + 10);
	// std::cout << getType() << " XP: " << getXP() << std::endl;
}

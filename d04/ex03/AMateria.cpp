/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:20:46 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:20:46 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

// Operators
AMateria & AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
	{
		setType(rhs.getType());
		setXP(rhs.getXP());
	}
	return (*this);
}

// Methods
void AMateria::use(ICharacter & target)
{
	std::cout << "No effect on " << target.getName() << std::endl;
	return ;
}

// Setters
void AMateria::setType(std::string const & type)
{
	_type = type;
	return ;
}

void AMateria::setXP(unsigned int xp)
{
	_xp = xp;
	return ;
}

// Getters
std::string const & AMateria::getType(void) const
{
	return (_type);
}

unsigned int AMateria::getXP(void) const
{
	return (_xp);
}

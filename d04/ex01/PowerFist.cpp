/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:28:58 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:28:58 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void)
{
	setName("Power Fist");
	setDamage(50);
	setAPCost(8);
	return ;
}

PowerFist::PowerFist(std::string const & name, int damage, int APCost)
{
	setName(name);
	setDamage(damage);
	setAPCost(APCost);
	return ;
}

PowerFist::PowerFist(PowerFist const & src)
{
	*this = src;
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

// Operators
PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
		setDamage(rhs.getDamage());
		setAPCost(rhs.getAPCost());
	}
	return (*this);
}

// Methods
void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}

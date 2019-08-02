/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:27:41 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:27:42 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
{
	setName("Plasma Rifle");
	setDamage(21);
	setAPCost(5);
	return ;
}

PlasmaRifle::PlasmaRifle(std::string const & name, int damage, int APCost)
{
	setName(name);
	setDamage(damage);
	setAPCost(APCost);
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
	*this = src;
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

// Operators
PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
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
void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}

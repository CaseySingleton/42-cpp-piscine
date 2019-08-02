/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:27:30 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:27:31 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(std::string const & name, int damage, int APCost)
{
	setName(name);
	setDamage(damage);
	setAPCost(APCost);
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

// Operators
AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
		setDamage(rhs.getDamage());
		setAPCost(rhs.getAPCost());
	}
	return (*this);
}

// Setters
void AWeapon::setName(std::string const & name)
{
	this->_name = name;
	return ;
}

void AWeapon::setDamage(int const damage)
{
	this->_damage = damage;
	return ;
}

void AWeapon::setAPCost(int const APCost)
{
	this->_APCost = APCost;
	return ;
}

// Getters
std::string const & AWeapon::getName(void) const
{
	return (this->_name);
}

int	AWeapon::getDamage(void) const
{
	return (this->_damage);
}

int AWeapon::getAPCost(void) const
{
	return (this->_APCost);
}

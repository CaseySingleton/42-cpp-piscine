/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:49:20 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 20:49:20 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::HumanB(void)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
	return ;
}

// Setters

void HumanB::setName(std::string name)
{
	this->_name = name;
	return ;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
	return ;
}

// Getters

std::string HumanB::getName(void) const
{
	return (this->_name);
}

// Weapon *HumanB::getWeapon(void) const
// {
// 	return (this->_weapon);
// }

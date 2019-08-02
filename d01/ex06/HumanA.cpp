/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:49:09 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 20:49:10 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::HumanA(Weapon& weapon) : _weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
	return ;
}

// Setters

void HumanA::setName(std::string name)
{
	this->_name = name;
	return ;
}

// void HumanA::setWeapon(Weapon& weapon)
// {
// 	this->_weapon = weapon;
// }

// Getters

std::string HumanA::getName(void) const
{
	return (this->_name);
}

// Weapon *HumanA::getWeapon(void) const
// {
// 	return (this._weapon);
// }

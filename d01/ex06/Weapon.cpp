/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:49:31 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 20:49:31 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

// Setters
void Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}

//Getters
const std::string &Weapon::getType(void) const
{
	const std::string &type = this->_type;
	return (type);
}

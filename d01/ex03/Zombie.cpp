/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:12:02 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 17:12:02 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("George"), _type("Generic")
{
	// std::cout << "Everyone say hello to " << _name << " the " << _type << " zombie!" << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name), _type("Confused")
{
	// std::cout << "Everyone say hello to " << _name << " the " << _type << " zombie!" << std::endl;
	return ;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	// std::cout << "Everyone say hello to \'" << _name << "\' the " << _type << " zombie!" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie \'" << _name << "\' has died... again..." << std::endl;
	return ;
}

// Methods
void Zombie::announce(void)
{
	std::cout << _name << " the " << _type << ": BRRRrrRRAaaAAAIIiiiIinNnNnnSsssSs" << std::endl;
	return ;
}

// Setters
void Zombie::setName(std::string name)
{
	_name = name;
}

void Zombie::setType(std::string type)
{
	_type = type;
}

// Getters
std::string Zombie::getName(void) const
{
	std::string name = _name;
	return (name);
}

std::string Zombie::getType(void) const
{
	std::string type = _type;
	return (type);
}

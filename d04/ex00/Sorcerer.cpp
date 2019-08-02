/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:17:36 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 15:17:37 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	return ;
}

Sorcerer::Sorcerer(std::string const & name, std::string const & title)
{
	setName(name);
	setTitle(title);
	std::cout << getName() << ", " << getTitle() << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << getName() << ", " << getTitle() << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

// Operators
Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
		setTitle(rhs.getTitle());
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, const Sorcerer & s)
{
	o << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies !" << std::endl;

	return (o);
}

// Methods
void Sorcerer::polymorph(Victim const & target) const
{
	target.getPolymorphed();
	return ;
}

// Setters
void Sorcerer::setName(std::string const & name)
{
	_name = name;
	return ;
}

void Sorcerer::setTitle(std::string const & title)
{
	_title = title;
	return ;
}

// Getters
std::string Sorcerer::getName(void) const
{
	return (_name);
}

std::string Sorcerer::getTitle(void) const
{
	return (_title);
}

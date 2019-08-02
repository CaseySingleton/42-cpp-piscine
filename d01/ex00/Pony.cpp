/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:19:30 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 16:19:31 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void) : _numberOfLegs(4), _hasAHorn(false), _name("Tina")
{
	std::cout << "* poof * A pony has appeared!" << std::endl;
	return ;
}

Pony::Pony(int numberOfLegs) : _numberOfLegs(numberOfLegs), _hasAHorn(false), _name("Paul")
{
	std::cout << "* poof * A pony has appeared!";
	if (numberOfLegs > 4)
		std::cout << " Why does it have so many legs...";
	else if (numberOfLegs < 4 && numberOfLegs > -1)
		std::cout << " Poor thing lost some legs.";
	else
	{
		std::cout << " A negative number of legs doesn't make sense. I'll give it 4";
		_numberOfLegs = 4;
	}
	std::cout << std::endl;
	return ;
}

Pony::Pony(std::string name, int numberOfLegs) : _numberOfLegs(numberOfLegs), _hasAHorn(false), _name(name)
{
	std::cout << "* poof * A pony has appeared!";
	if (numberOfLegs > 4)
		std::cout << " Why does it have so many legs...";
	else if (numberOfLegs < 4 && numberOfLegs > -1)
		std::cout << " Poor thing lost some legs.";
	else
	{
		std::cout << " A negative number of legs doesn't make sense. I'll give it 4";
		_numberOfLegs = 4;
	}
	std::cout << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Get out of here " << _name << "! You dumb animal!" << std::endl;
	return ;
}

void Pony::namePony(std::string name)
{
	std::cout << "You changed your ponys name to \'" << name << "\'" << std::endl;
	_name = name;
	return ;
}

void Pony::evolve(void)
{
	std::cout << "You put a birthday hat on your pony. Now it's a unicorn!" << std::endl;
	_hasAHorn = true;
	return ;
}

void Pony::makeSound(void) const
{
	std::cout << _name << " makes a noise:" << " * Woof *" << std::endl;
	return ;
}

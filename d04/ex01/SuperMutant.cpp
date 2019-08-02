/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:29:20 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:29:21 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
{
	setType("Super Mutant");
	setHealth(170);
	setMaxHealth(170);
	setDamageReduction(3);
	std::cout << "GAAAH. ME WANT SMASH HEADS !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(int health, int damageReduction)
{
	setType("Super Mutant");
	setHealth(health);
	setMaxHealth(health);
	setDamageReduction(damageReduction);
	std::cout << "GAAAH. ME WANT SMASH HEADS !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & src)
{
	*this = src;
	// std::cout << "GAAAH. ME WANT SMASH HEADS !" << std::endl; <-- Not sure about this line
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "AAARGH ..." << std::endl;
	return ;
}

// Operators
SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
	if (this != &rhs)
	{
		setType(rhs.getType());
		setHealth(rhs.getHealth());
	}
	return (*this);
}

// Methods
void SuperMutant::takeDamage(int damage)
{
	int currentHealth = getHealth();

	if (currentHealth > 0)
	{
		currentHealth -= damage - getDamageReduction();
		if (currentHealth < 0)
			setHealth(0);
		else
			setHealth(currentHealth);
	}
}

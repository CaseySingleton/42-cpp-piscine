/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:29:34 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:29:35 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
{
	setType("Rad Scorpion");
	setHealth(80);
	setMaxHealth(80);
	setDamageReduction(0);
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(int health, int damageReduction)
{
	setType("Rad Scorpion");
	setHealth(health);
	setMaxHealth(health);
	setDamageReduction(damageReduction);
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const & src)
{
	*this = src;
	// std::cout << "* click click click *" << std::endl; <-- Not sure about this line
	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

// Operators
RadScorpion & RadScorpion::operator=(RadScorpion const & rhs)
{
	if (this != &rhs)
	{
		setType(rhs.getType());
		setHealth(rhs.getHealth());
	}
	return (*this);
}

// Methods
void RadScorpion::takeDamage(int damage)
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

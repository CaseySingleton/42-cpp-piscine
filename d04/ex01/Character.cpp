/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:30:31 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:30:31 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	// setName("Easy Pete");
	// setActionPoints(40);
	// setMaxActionPoints(40);
	// setCurrentWeapon(NULL);
	return ;
}

Character::Character(std::string const & name)
{
	setName(name);
	setActionPoints(40);
	setMaxActionPoints(40);
	setCurrentWeapon(NULL);
}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character(void)
{
	return ;
}

// Operators
Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, const Character & rhs)
{
	o << rhs.getName() << " has [" << rhs.getActionPoints() << "/" << rhs.getMaxActionPoints() << "] AP ";
	if (rhs.getCurrentWeapon())
		o << "and wields a " << rhs.getCurrentWeapon()->getName() << std::endl;
	else
		o << "and is unarmed" << std::endl;

	return (o);
}

// Methods
void Character::recoverAP(void)
{
	int currentActionPoints = getActionPoints();

	if (currentActionPoints < 40)
	{
		currentActionPoints += 10;
		if (currentActionPoints > 40)
			currentActionPoints = 40;
		setActionPoints(currentActionPoints);
	}
}

void Character::equipWeapon(AWeapon * weapon)
{
	AWeapon * currentWeapon = getCurrentWeapon();

	std::cout << getName();
	if (currentWeapon)
		std::cout << " swapped out " << currentWeapon->getName() << " for: ";
	else
		std::cout << " equiped: ";
	std::cout << weapon->getName() << std::endl;
	setCurrentWeapon(weapon);
}

void Character::unequipWeapon(void)
{
	AWeapon * currentWeapon = getCurrentWeapon();
	if (currentWeapon)
		std::cout << getName() << " unequiped: " << currentWeapon->getName() << std::endl;
	setCurrentWeapon(NULL);
}

void Character::attack(Enemy *target)
{
	AWeapon *weapon = getCurrentWeapon();
	int ap = getActionPoints();

	if (weapon)
	{
		if (ap >= weapon->getAPCost())
		{
			std::cout << getName() << " attacks " << target->getType() << " with a " << weapon->getName() << std::endl;
			weapon->attack();
			target->takeDamage(weapon->getDamage());
			setActionPoints(ap - weapon->getAPCost());
		}
		else
			std::cout << "Not enough AP [" << ap << "/" << weapon->getAPCost() << "]" << std::endl;
	}
	else
		std::cout << "No weapon equiped" << std::endl;
}

// Setters
void Character::setName(std::string const & name)
{
	this->_name = name;
	return ;
}

void Character::setActionPoints(int actionPoints)
{
	this->_actionPoints = actionPoints;
	return ;
}

void Character::setMaxActionPoints(int maxActionPoints)
{
	this->_maxActionPoints = maxActionPoints;
	return ;
}

void Character::setCurrentWeapon(AWeapon * weapon)
{
	this->_currentWeapon = weapon;
	return ;
}

// Getters
std::string Character::getName(void) const
{
	return (this->_name);
}

int Character::getActionPoints(void) const
{
	return (this->_actionPoints);
}

int Character::getMaxActionPoints(void) const
{
	return (this->_maxActionPoints);
}

AWeapon * Character::getCurrentWeapon(void) const
{
	return (this->_currentWeapon);
}

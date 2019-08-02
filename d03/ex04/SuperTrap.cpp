/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 22:19:04 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/02 22:19:05 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	srand(time(0));
	std::cout << "SSSSSSUUUUPPPPPPEEEEEEERRRRRRRR" << std::endl;
	return ;
}

SuperTrap::SuperTrap(const std::string & name)
{
	srand(time(0));
	setName(name);
	setMaxHP(100);
	setCurrentHP(100);
	setMaxEnergy(120);
	setCurrentEnergy(120);
	setLevel(1);
	setMeleeDamage(60);
	setRangedDamage(20);
	setDamageReduction(5);
	std::cout << "You can call me, Super " << getName() << "!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
	*this = src;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs)
{
	if (this != &rhs)
	{
		setName(rhs._name);
		setMaxHP(rhs._maxHP);
		setCurrentHP(rhs._currentHP);
		setMaxEnergy(rhs._maxEnergy);
		setCurrentEnergy(rhs._currentEnergy);
		setLevel(rhs._level);
		setMeleeDamage(rhs._meleeDamage);
		setRangedDamage(rhs._rangedDamage);
		setDamageReduction(rhs._damageReduction);
	}
	return (*this);
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "This isn't the last you'll see of " << getName() << "!!" << std::endl;
}

void SuperTrap::meleeAttack(const std::string & target) const
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(const std::string & target) const
{
	FragTrap::rangedAttack(target);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:59:22 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/01 23:59:22 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <stdlib.h>
#include <time.h>

FragTrap::FragTrap(void)
{
	srand(time(0));
	std::cout << "I AM ALIIIIVVEEEEEE!!!!!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const & name)
{
	srand(time(0));
	setName(name);
	setMaxHP(100);
	setCurrentHP(100);
	setMaxEnergy(100);
	setCurrentEnergy(100);
	setLevel(1);
	setMeleeDamage(30);
	setRangedDamage(20);
	setDamageReduction(5);
	std::cout << "Let's get this party started!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
	if (this != &src)
	{
		setName(src._name);
		setMaxHP(src._maxHP);
		setCurrentHP(src._currentHP);
		setMaxEnergy(src._maxEnergy);
		setCurrentEnergy(src._currentEnergy);
		setLevel(src._level);
		setMeleeDamage(src._meleeDamage);
		setRangedDamage(src._rangedDamage);
		setDamageReduction(src._damageReduction);
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "*cough* Format my harddrive *dies*" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_currentEnergy < 25)
	{
		std::cout << "I don't have enough energy to do that" << std::endl;
		return ;
	}
	this->_currentEnergy -= 25;
	std::string dialog[] = {"Defragmenting!",
							"Recompiling my combat code!",
							"It's about to get magical!",
							"Look out everybody, things are about to get awesome!",
							"F to the R to the 4 to the G to the WHAAT!",
							"Running vaulthunter_dot_exe()"};
	int i = rand() % 5;
	std::cout << this->_name << ": \"" << dialog[i] << "\" " << target << " Is gonna die ☠️" << std::endl;
}

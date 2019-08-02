/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:59:22 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/18 19:47:40 by csinglet         ###   ########.fr       */
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
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "*cough* Format my harddrive *dies*" << std::endl;
	return ;
}

// Operators
FragTrap & FragTrap::operator=(FragTrap const & src)
{
	if (this != &src)
	{
		setName(src.getName());
		setMaxHP(src.getMaxHP());
		setCurrentHP(src.getCurrentHP());
		setMaxEnergy(src.getMaxEnergy());
		setCurrentEnergy(src.getCurrentEnergy());
		setLevel(src.getLevel());
		setMeleeDamage(src.getMeleeDamage());
		setRangedDamage(src.getRangedDamage());
		setDamageReduction(src.getDamageReduction());
	}
	return (*this);
}

// Methods
void FragTrap::meleeAttack(std::string const & target)
{
	std::string dialog[] = {"WHY WON'T YOU DIE!",
							"This is getting old",
							"I'm not made to hit things up close!",
							"Bring it on!"};
	int i = rand() % 4;
	std::cout << this->_name << ": \"" << dialog[i] << "\" [" << target << " takes " << this->_meleeDamage << " damage]" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::string dialog[] = {"Fire in the hole!",
							"Who needs accruacy when you have explosions!",
							"Boom!",
							"HAHA!"};
	int i = rand() % 4;
	std::cout << this->_name << ": \"" << dialog[i] << "\" [" << target << " takes " << this->_rangedDamage << " damage]" << std::endl;
}

void FragTrap::takeDamage(unsigned int damage)
{
	std::string dialog[] = {"OW!",
							"You call that an attack?",
							"I do more damage to myself every day!",
							"Please don't kill me..."};
	int i = rand() % 4;
	std::cout << this->_name << ": \"" << dialog[i] << "\" [" << this->_name << " takes " << damage << " damage]" << std::endl;
	this->_currentHP -= damage - this->_damageReduction;
	if (this->_currentHP <= 0)
		this->_currentHP = 0;
}

void FragTrap::beRepaired(unsigned int heal)
{
	std::string dialog[] = {"How do you heal a robot like that?",
							"Thanks!",
							"Why are you wasting heal on me?",
							"LET. ME. DIE."};
	int i = rand() % 4;
	std::cout << this->_name << ": \"" << dialog[i] << "\" [" << this->_name << " heals " << heal << " health]" << std::endl;
	this->_currentHP += heal;
	if (this->_currentHP > this->_maxHP)
		this->_currentHP = this->_maxHP;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (getCurrentEnergy() < 25)
	{
		std::cout << "Nah, I'm not feelin' it" << std::endl;
		return ;
	}
	setCurrentEnergy(getCurrentEnergy() - 25);
	std::string dialog[] = {"Defragmenting!",
							"Recompiling my combat code!",
							"It's about to get magical!",
							"Look out everybody, things are about to get awesome!",
							"F to the R to the 4 to the G to the WHAAT!",
							"Running vaulthunter_dot_exe()"};
	int i = rand() % 5;
	std::cout << getName() << ": \"" << dialog[i] << "\" " << target << " Is gonna die ☠️" << std::endl;
}

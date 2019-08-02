/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:59:22 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/18 10:58:55 by csinglet         ###   ########.fr       */
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

FragTrap::FragTrap(std::string name)
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
	setArmor(5);
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
		_maxHP = src._maxHP;
		_currentHP = src._currentHP;
		_currentEnergy= src._currentEnergy;
		_level = src._level;
		_name = src._name;
		_meleeDamage = src._meleeDamage;
		_rangedDamage = src._rangedDamage;
		_armor= src._armor;
	}
	return (*this);
}

// Methods
void FragTrap::meleeAttack(std::string const & target)
{
	std::string dialog[] = {"HYAH!",
							"Take that!",
							"Bop",
							"YEEHAWW!"};
	int i = rand() % 4;
	std::cout << _name << ": \"" << dialog[i] << "\" [" << target << " takes " << _meleeDamage << " damage]" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::string dialog[] = {"Did I miss?",
							"MY ACCURACY IS UNMATCHED",
							"It's high noon...",
							"*blows on barrel of gun* Don't mess with " + _name + "!"};
	int i = rand() % 4;
	std::cout << _name << ": \"" << dialog[i] << "\" [" << target << " takes " << _rangedDamage << " damage]" << std::endl;
}

void FragTrap::takeDamage(unsigned int damage)
{
	std::string dialog[] = {"SWEET JESUS THAT HURTS!!",
							"Good thing I can't feel pain!",
							"This is nothing compared to my emotional damage",
							"Jokes on you, I want to die!"};
	int i = rand() % 4;
	std::cout << _name << ": \"" << dialog[i] << "\" [" << _name << " takes " << damage - _armor << " damage]" << std::endl;
	_currentHP -= damage - _armor;
	if (_currentHP <= 0)
		_currentHP = 0;
}

void FragTrap::beRepaired(unsigned int heal)
{
	std::string dialog[] = {"Sweet life juice.",
							"I didn't even know I was hurt!",
							"That's a waste! My consciousness is backed up on multiple servers!",
							"This robot never dies..."};
	int i = rand() % 4;
	std::cout << _name << ": \"" << dialog[i] << "\" [" << _name << " heals " << heal << " health]" << std::endl;
	_currentHP += heal;
	if (_currentHP > _maxHP)
		_currentHP = _maxHP;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (_currentEnergy < 25)
	{
		std::cout << "I'm tired, get someone else to do it." << std::endl;
		return ;
	}
	_currentEnergy -= 25;
	std::string dialog[] = {"Defragmenting!",
							"Recompiling my combat code!",
							"It's about to get magical!",
							"Look out everybody, things are about to get awesome!",
							"F to the R to the 4 to the G to the WHAAT!",
							"Running vaulthunter_dot_exe()"};
	int i = rand() % 5;
	std::cout << _name << ": \"" << dialog[i] << "\" " << target << " Is gonna die ☠️" << std::endl;
}

void FragTrap::displayStats(void) const
{
	std::cout << "Stats for CLP4TR4P: " << getName() << std::endl;
	std::cout << "HEALTH" << "    ENERGY" << "    LEVEL" << std::endl;
	std::cout << "[" << getCurrentHP() << "/" << getMaxHP() << "]";
	std::cout << " [" << getCurrentEnergy() << "/" << getMaxEnergy()<< "]";
	std::cout << " [" << getLevel() << "]" << std::endl;
}

// Setters
void FragTrap::setName(std::string const & name)
{
	_name = name;
	return ;
}

void FragTrap::setMaxHP(unsigned int maxHP)
{
	_maxHP = maxHP;
	return ;
}

void FragTrap::setCurrentHP(unsigned int currentHP)
{
	_currentHP = currentHP;
	return ;
}

void FragTrap::setMaxEnergy(unsigned int maxEnergy)
{
	_maxEnergy = maxEnergy;
	return ;
}

void FragTrap::setCurrentEnergy(unsigned int currentEnergy)
{
	_currentEnergy = currentEnergy;
	return ;
}

void FragTrap::setLevel(unsigned int level)
{
	_level = level;
	return ;
}

void FragTrap::setMeleeDamage(unsigned int meleeDamage)
{
	_meleeDamage = meleeDamage;
	return ;
}

void FragTrap::setRangedDamage(unsigned int rangedDamage)
{
	_rangedDamage = rangedDamage;
	return ;
}

void FragTrap::setArmor(unsigned int armor)
{
	_armor = armor;
	return ;
}

// Getters
std::string FragTrap::getName(void) const
{
	return (_name);
}

unsigned int FragTrap::getMaxHP(void) const
{
	return (_maxHP);
}

unsigned int FragTrap::getCurrentHP(void) const
{
	return (_currentHP);
}

unsigned int FragTrap::getMaxEnergy(void) const
{
	return (_maxEnergy);
}

unsigned int FragTrap::getCurrentEnergy(void) const
{
	return (_currentEnergy);
}

unsigned int FragTrap::getLevel(void) const
{
	return (_level);
}

unsigned int FragTrap::getMeleeDamage(void) const
{
	return (_meleeDamage);
}

unsigned int FragTrap::getRangedDamage(void) const
{
	return (_rangedDamage);
}

unsigned int FragTrap::getArmor(void) const
{
	return (_armor);
}

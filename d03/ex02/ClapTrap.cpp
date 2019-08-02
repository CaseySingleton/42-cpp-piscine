/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:42:19 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/18 19:47:29 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <stdlib.h>
#include <time.h>

ClapTrap::ClapTrap(void)
{
	srand(time(0));
	std::cout << "I am CL4P-TP, But you may call me by my locally designated name: Clap Trap!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const & name)
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
	std::cout << "No one's ever called me " << this->_name << " before." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
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

ClapTrap::~ClapTrap(void)
{
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... *death*" << std::endl;
}

// Methods
void ClapTrap::meleeAttack(std::string const & target) const
{
	std::string dialog[] = {"HYAH!",
							"Take that!",
							"Bop.",
							"YEEHAWW!"};
	int i = rand() % 4;
	std::cout << this->_name << ": \"" << dialog[i] << "\" [" << target << " takes " << this->_meleeDamage << " damage]" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target) const
{
	std::string dialog[] = {"Did I miss?",
							"MY ACCURACY IS UNMATCHED",
							"It's high noon...",
							"*blows on barrel of gun* Don't mess with " + this->_name + "!"};
	int i = rand() % 4;
	std::cout << this->_name << ": \"" << dialog[i] << "\" [" << target << " takes " << this->_rangedDamage << " damage]" << std::endl;
}

void ClapTrap::takeDamage(unsigned int damage)
{
	std::string dialog[] = {"JESUS THAT HURTS!!",
							"Good thing I can't feel pain!",
							"This is nothing compared to my emotional damage",
							"Jokes on you, I want to die!"};
	int i = rand() % 4;
	std::cout << this->_name << ": \"" << dialog[i] << "\" [" << this->_name << " takes " << damage << " damage]" << std::endl;
	this->_currentHP -= damage - this->_damageReduction;
	if (this->_currentHP <= 0)
		this->_currentHP = 0;
}

void ClapTrap::beRepaired(unsigned int heal)
{
	std::string dialog[] = {"Sweet life juice.",
							"I didn't even know I was hurt!",
							"That's a waste! My consciousness is backed up on multiple servers!",
							"This robot never dies..."};
	int i = rand() % 4;
	std::cout << this->_name << ": \"" << dialog[i] << "\" [" << this->_name << " heals " << heal << " health]" << std::endl;
	this->_currentHP += heal;
	if (this->_currentHP > this->_maxHP)
		this->_currentHP = this->_maxHP;
}

void ClapTrap::displayStats(void) const
{
	std::cout << getName() << " HP [" << getCurrentHP() << "/" << getMaxHP() << "] ";
	std::cout << getName() << " ENERGY [" << getCurrentEnergy() << "/" << getMaxEnergy()<< "] ";
	std::cout << getName() << " LEVEL [" << getLevel() << "]" << std::endl;
}

// Setters
void ClapTrap::setName(std::string const & name)
{
	this->_name = name;
	return ;
}

void ClapTrap::setMaxHP(unsigned int maxHP)
{
	this->_maxHP = maxHP;
	return ;
}

void ClapTrap::setCurrentHP(unsigned int currentHP)
{
	this->_currentHP = currentHP;
	return ;
}

void ClapTrap::setMaxEnergy(unsigned int maxEnergy)
{
	this->_maxEnergy = maxEnergy;
	return ;
}

void ClapTrap::setCurrentEnergy(unsigned int currentEnergy)
{
	this->_currentEnergy = currentEnergy;
	return ;
}

void ClapTrap::setLevel(unsigned int level)
{
	this->_level = level;
	return ;
}

void ClapTrap::setMeleeDamage(unsigned int meleeDamage)
{
	this->_meleeDamage = meleeDamage;
	return ;
}

void ClapTrap::setRangedDamage(unsigned int rangedDamage)
{
	this->_rangedDamage = rangedDamage;
	return ;
}

void ClapTrap::setDamageReduction(unsigned int damageReduction)
{
	this->_damageReduction = damageReduction;
	return ;
}

// Getters
std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int ClapTrap::getMaxHP(void) const
{
	return (this->_maxHP);
}

unsigned int ClapTrap::getCurrentHP(void) const
{
	return (this->_currentHP);
}

unsigned int ClapTrap::getMaxEnergy(void) const
{
	return (this->_maxEnergy);
}

unsigned int ClapTrap::getCurrentEnergy(void) const
{
	return (this->_currentEnergy);
}

unsigned int ClapTrap::getLevel(void) const
{
	return (this->_level);
}

unsigned int ClapTrap::getMeleeDamage(void) const
{
	return (this->_meleeDamage);
}

unsigned int ClapTrap::getRangedDamage(void) const
{
	return (this->_rangedDamage);
}

unsigned int ClapTrap::getDamageReduction(void) const
{
	return (this->_damageReduction);
}

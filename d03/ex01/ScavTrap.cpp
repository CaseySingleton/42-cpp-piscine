/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 18:30:57 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/02 18:30:58 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <stdlib.h>
#include <time.h>

ScavTrap::ScavTrap(void)
{
	srand(time(0));
	std::cout << "Did you really have to boot me back up?" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	srand(time(0));
	setName(name);
	setMaxHP(100);
	setCurrentHP(100);
	setMaxEnergy(50);
	setCurrentEnergy(50);
	setLevel(1);
	setMeleeDamage(20);
	setRangedDamage(15);
	setDamageReduction(3);
	std::cout << "Can't do this yourself?" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Finally... *boots down*" << std::endl;
}

// Operators
ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	if (this != &src)
	{
		this->_maxHP = src._maxHP;
		this->_currentHP = src._currentHP;
		this->_currentEnergy= src._currentEnergy;
		this->_level = src._level;
		this->_name = src._name;
		this->_meleeDamage = src._meleeDamage;
		this->_rangedDamage = src._rangedDamage;
		this->_damageReduction= src._damageReduction;
	}
	return (*this);
}

// Methods
void ScavTrap::meleeAttack(std::string const & target)
{
	std::string dialog[] = {"HYAH!",
							"Take that!",
							"Bop.",
							"YEEHAWW!"};
	int i = rand() % 4;
	std::cout << this->_name << ": \"" << dialog[i] << "\" [" << target << " takes " << this->_meleeDamage << " damage]" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::string dialog[] = {"Did I miss?",
							"MY ACCURACY IS UNMATCHED",
							"It's high noon...",
							"*blows on barrel of gun* Don't mess with " + this->_name + "!"};
	int i = rand() % 4;
	std::cout << this->_name << ": \"" << dialog[i] << "\" [" << target << " takes " << this->_rangedDamage << " damage]" << std::endl;
}

void ScavTrap::takeDamage(unsigned int damage)
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

void ScavTrap::beRepaired(unsigned int heal)
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

void ScavTrap::challengeNewcomer(std::string const & target) const
{
	int choice = -1;
	int chosen[11] = {0};
	std::string challenges[] = {"Collect 10,000 small rocks",
								"Climb to the top of the Hyperion Tower",
								"Play through every Borderlands game 300 times",
								"Join 42 Silicon Valley and get to level 21",
								"Create a 2D side-scrolling game about Russian Cosmonauts fighting Illinoisan Nazis on the dark side of the moon",
								"Help me get over my crippling anxiety of stairs",
								"Defeat the Giant Monkey Man and save The 9th Dimension",
								"Defeat the slightly smaller Giant Monkey Man and save the 8th Dimension",
								"Fold your laundry",
								"Complete the c++ piscine",
								"Git gud"};
	std::cout << "VAULT HUNTER!! I, " << this->_name << ", challenge you, " << target << ", to complete these tasks!" << std::endl;;
	for (int i = 0; i < 4; i++)
	{
		while (choice == -1 || chosen[choice] != 0)
			choice = rand() % 11;
		chosen[choice] = 1;
		std::cout << "  [" << i + 1<< "] ";
		std::cout << challenges[choice];
		std::cout << std::endl;
	}
	std::cout << "AND NO WHINING!" << std::endl;
}

void ScavTrap::displayStats(void) const
{
	std::cout << getName() << " HP [" << getCurrentHP() << "/" << getMaxHP() << "] ";
	std::cout << getName() << " ENERGY [" << getCurrentEnergy() << "/" << getMaxEnergy()<< "] ";
	std::cout << getName() << " LEVEL [" << getLevel() << "]" << std::endl;
}

// Setters
void ScavTrap::setName(std::string const & name)
{
	this->_name = name;
	return ;
}

void ScavTrap::setMaxHP(unsigned int maxHP)
{
	this->_maxHP = maxHP;
	return ;
}

void ScavTrap::setCurrentHP(unsigned int currentHP)
{
	this->_currentHP = currentHP;
	return ;
}

void ScavTrap::setMaxEnergy(unsigned int maxEnergy)
{
	this->_maxEnergy = maxEnergy;
	return ;
}

void ScavTrap::setCurrentEnergy(unsigned int currentEnergy)
{
	this->_currentEnergy = currentEnergy;
	return ;
}

void ScavTrap::setLevel(unsigned int level)
{
	this->_level = level;
	return ;
}

void ScavTrap::setMeleeDamage(unsigned int meleeDamage)
{
	this->_meleeDamage = meleeDamage;
	return ;
}

void ScavTrap::setRangedDamage(unsigned int rangedDamage)
{
	this->_rangedDamage = rangedDamage;
	return ;
}

void ScavTrap::setDamageReduction(unsigned int damageReduction)
{
	this->_damageReduction = damageReduction;
	return ;
}

// Getters
std::string ScavTrap::getName(void) const
{
	return (this->_name);
}

unsigned int ScavTrap::getMaxHP(void) const
{
	return (this->_maxHP);
}

unsigned int ScavTrap::getCurrentHP(void) const
{
	return (this->_currentHP);
}

unsigned int ScavTrap::getMaxEnergy(void) const
{
	return (this->_maxEnergy);
}

unsigned int ScavTrap::getCurrentEnergy(void) const
{
	return (this->_currentEnergy);
}

unsigned int ScavTrap::getLevel(void) const
{
	return (this->_level);
}

unsigned int ScavTrap::getMeleeDamage(void) const
{
	return (this->_meleeDamage);
}

unsigned int ScavTrap::getRangedDamage(void) const
{
	return (this->_rangedDamage);
}

unsigned int ScavTrap::getDamageReduction(void) const
{
	return (this->_damageReduction);
}

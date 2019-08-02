/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 18:30:57 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/18 19:47:53 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <stdlib.h>
#include <time.h>

ScavTrap::ScavTrap(void)
{
	srand(time(0));
	std::cout << "Did you really have to boot me back up?" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const & name)
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

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
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

ScavTrap::~ScavTrap(void)
{
	std::cout << "Finally... *boots down*" << std::endl;
}

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

// Helper to see if everything's working

void ScavTrap::displayStats(void) const
{
	std::cout << this->_name << " HP [" << this->_currentHP << "/" << this->_maxHP << "] ";
	std::cout << this->_name << " ENERGY [" << this->_currentEnergy << "/" << this->_maxEnergy << "] ";
	std::cout << this->_name << " LEVEL [" << this->_level << "]" << std::endl;
}


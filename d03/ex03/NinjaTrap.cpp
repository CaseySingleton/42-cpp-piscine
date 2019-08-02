/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:57:39 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/02 20:57:40 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	srand(time(0));
	std::cout << "Didn't see me coming did ya!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	srand(time(0));
	setName(name);
	setMaxHP(60);
	setCurrentHP(60);
	setMaxEnergy(120);
	setCurrentEnergy(120);
	setLevel(1);
	setMeleeDamage(60);
	setRangedDamage(5);
	setDamageReduction(0);
	std::cout << "* " << this->_name << " appears from the shadows *" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	*this = src;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src)
{
	if (this != &src)
	{
		this->_maxHP = src._maxHP;
		this->_currentHP = src._currentHP;
		this->_maxEnergy = src._maxEnergy;
		this->_currentEnergy= src._currentEnergy;
		this->_level = src._level;
		this->_name = src._name;
		this->_meleeDamage = src._meleeDamage;
		this->_rangedDamage = src._rangedDamage;
		this->_damageReduction= src._damageReduction;
	}
	return (*this);
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Not today... * puff of smoke *" << std::endl;
}

/*
**	Member functions
*/

void NinjaTrap::ninjaShoebox(ClapTrap const &) const
{
	std::cout << "DO. NOT. START. DANCING." << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &) const
{
	std::cout << "Wanna go kill something?" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &) const
{
	std::cout << "Got any new weapons for me?" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & ninjaTrap) const
{
	if (this == &ninjaTrap)
		std::cout << "DAMN I LOOK GOOD!" << std::endl;
	else
		std::cout << "Who do you think you are?! HOW DARE YOU COPY ME!!" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:42:23 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/18 19:47:33 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _maxHP;
		int _currentHP;
		int _maxEnergy;
		int _currentEnergy;
		int _level;
		int _meleeDamage;
		int _rangedDamage;
		int _damageReduction;

	public:
		ClapTrap(void);
		ClapTrap(std::string const &);
		ClapTrap(ClapTrap const &);
		~ClapTrap(void);
		// Operators
		ClapTrap & operator=(ClapTrap const &);
		// Methods
		void meleeAttack(std::string const &) const;
		void rangedAttack(std::string const &) const;
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void displayStats(void) const;
		// Setters
		void setName(std::string const &);
		void setMaxHP(unsigned int);
		void setCurrentHP(unsigned int);
		void setMaxEnergy(unsigned int);
		void setCurrentEnergy(unsigned int);
		void setLevel(unsigned int);
		void setMeleeDamage(unsigned int);
		void setRangedDamage(unsigned int);
		void setDamageReduction(unsigned int);
		// Getters
		std::string getName(void) const;
		unsigned int getMaxHP(void) const;
		unsigned int getCurrentHP(void) const;
		unsigned int getMaxEnergy(void) const;
		unsigned int getCurrentEnergy(void) const;
		unsigned int getLevel(void) const;
		unsigned int getMeleeDamage(void) const;
		unsigned int getRangedDamage(void) const;
		unsigned int getDamageReduction(void) const;
};

#endif

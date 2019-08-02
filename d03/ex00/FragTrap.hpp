/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:59:32 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/18 10:58:58 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
	private:
		std::string _name;
		int _maxHP;
		int _currentHP;
		int _maxEnergy;
		int _currentEnergy;
		int _level;
		int _meleeDamage;
		int _rangedDamage;
		int _armor;

	public:
		FragTrap(void);
		FragTrap(std::string);
		FragTrap(FragTrap const &);
		~FragTrap(void);
		// Operators
		FragTrap & operator=(FragTrap const &);
		// Methods
		void meleeAttack(std::string const &);
		void rangedAttack(std::string const &);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void vaulthunter_dot_exe(std::string const &);
		void displayStats(void) const;
		bool isAlive(void) const;
		// Setters
		void setName(std::string const &);
		void setMaxHP(unsigned int);
		void setCurrentHP(unsigned int);
		void setMaxEnergy(unsigned int);
		void setCurrentEnergy(unsigned int);
		void setLevel(unsigned int);
		void setMeleeDamage(unsigned int);
		void setRangedDamage(unsigned int);
		void setArmor(unsigned int);
		// Getters
		std::string getName(void) const;
		unsigned int getMaxHP(void) const;
		unsigned int getCurrentHP(void) const;
		unsigned int getMaxEnergy(void) const;
		unsigned int getCurrentEnergy(void) const;
		unsigned int getLevel(void) const;
		unsigned int getMeleeDamage(void) const;
		unsigned int getRangedDamage(void) const;
		unsigned int getArmor(void) const;
};

#endif

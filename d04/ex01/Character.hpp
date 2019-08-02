/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:30:35 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:30:36 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int _actionPoints;
		int _maxActionPoints;
		AWeapon * _currentWeapon;
	protected:
		Character(void);

	public:
		Character(std::string const &);
		Character(Character const &);
		~Character(void);
		// Operators
		Character & operator=(Character const &);
		// Methods
		void recoverAP(void);
		void equipWeapon(AWeapon *);
		void unequipWeapon(void);
		void attack(Enemy *);
		// Setters
		void setName(std::string const &);
		void setActionPoints(int);
		void setMaxActionPoints(int);
		void setCurrentWeapon(AWeapon *);
		// Getters
		std::string getName(void) const;
		int getActionPoints(void) const;
		int getMaxActionPoints(void) const;
		AWeapon * getCurrentWeapon(void) const ;
};

std::ostream & operator<<(std::ostream &, const Character &);

#endif

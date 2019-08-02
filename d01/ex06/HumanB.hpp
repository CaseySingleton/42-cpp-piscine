/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:49:23 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 20:49:24 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;

	public:
		HumanB(std::string name);
		HumanB(void);
		~HumanB(void);

		void attack(void) const;

		// Setters
			void setName(std::string);
			void setWeapon(Weapon&);
		// Getters
			std::string getName(void) const;
			// Weapon *getWeapon(void) const;
};

#endif

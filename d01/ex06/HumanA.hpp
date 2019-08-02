/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:49:13 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 20:49:14 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;

	public:
		HumanA(std::string, Weapon&);
		HumanA(Weapon&);
		~HumanA(void);

		void attack(void) const;

		// Setters
			void setName(std::string);
			// void setWeapon(Weapon);
		// Getters
			std::string getName(void) const;
			// Weapon *getWeapon(void) const;
};

#endif

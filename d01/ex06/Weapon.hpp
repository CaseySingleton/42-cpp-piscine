/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:49:34 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 20:49:34 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string);
		~Weapon(void);

		// Setters
		void setType(std::string);
		// Getters
		const std::string &getType(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:27:34 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:27:34 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	private:
		std::string	_name;
		int _damage;
		int _APCost;
	protected:
		AWeapon(void);

	public:
		AWeapon(std::string const &, int, int);
		AWeapon(AWeapon const &);
		~AWeapon(void);
		// Operators
		AWeapon & operator=(AWeapon const &);
		// Methods
		virtual void attack(void) const = 0;
		// Setters
		void setName(std::string const &);
		void setDamage(int const);
		void setAPCost(int const);
		// Getters
		std::string const & getName(void) const;
		int getDamage(void) const;
		int getAPCost(void) const;
};

#endif

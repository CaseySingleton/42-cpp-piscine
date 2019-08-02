/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 22:19:08 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/02 22:19:09 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string const &);
		SuperTrap(SuperTrap const &);
		~SuperTrap(void);
		// Operators
		SuperTrap & operator=(SuperTrap const &);

		void meleeAttack(std::string const &) const;
		void rangedAttack(std::string const &) const;
};

#endif

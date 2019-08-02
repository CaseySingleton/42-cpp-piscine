/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 18:31:03 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/02 18:31:04 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string const &);
		ScavTrap(ScavTrap const &);
		ScavTrap & operator=(ScavTrap const &);
		~ScavTrap(void);

		void meleeAttack(std::string const &);
		void rangedAttack(std::string const &);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void challengeNewcomer(std::string const &) const;

		// Helper
		void displayStats(void) const;
};

#endif

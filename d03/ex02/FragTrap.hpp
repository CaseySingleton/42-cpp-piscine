/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:59:32 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/18 19:47:44 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap(void);
		FragTrap(std::string const &);
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
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:57:44 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/02 20:57:45 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string);
		NinjaTrap(NinjaTrap const &);
		NinjaTrap & operator=(NinjaTrap const &);
		~NinjaTrap(void);
		// Member functions
		void ninjaShoebox(ClapTrap const &) const;
		void ninjaShoebox(FragTrap const &) const;
		void ninjaShoebox(ScavTrap const &) const;
		void ninjaShoebox(NinjaTrap const &) const;
};

#endif

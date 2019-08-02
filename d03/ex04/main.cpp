/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:59:39 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/01 23:59:40 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int			main(void)
{
	SuperTrap st("Dave");
	st.displayStats();
	st.vaulthunter_dot_exe("ABC");
	st.meleeAttack("A");
	st.rangedAttack("B");
	// st.ninjaShoebox(ClapTrap());
	return (0);
}

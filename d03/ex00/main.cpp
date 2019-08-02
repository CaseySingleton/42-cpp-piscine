/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:59:39 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/18 10:59:05 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int			main(void)
{
	FragTrap CLP4TR4P("TTY");

	CLP4TR4P.meleeAttack("Scooter");
	CLP4TR4P.rangedAttack("Raider");
	CLP4TR4P.displayStats();
	CLP4TR4P.takeDamage(200);
	CLP4TR4P.displayStats();
	CLP4TR4P.beRepaired(10);
	CLP4TR4P.displayStats();
	CLP4TR4P.vaulthunter_dot_exe("Big Maw");
	CLP4TR4P.displayStats();
	return (0);
}

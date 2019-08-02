/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:59:39 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/18 19:48:00 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int			main(void)
{
	FragTrap ft("FragTrap");

	ft.meleeAttack("Scooter");
	ft.rangedAttack("Raider");
	ft.displayStats();
	ft.takeDamage(13);
	ft.displayStats();
	ft.beRepaired(123);
	ft.displayStats();
	ft.vaulthunter_dot_exe("Big Maw");

	std::cout << std::endl;

	ScavTrap st("ScavTrap");
	st.meleeAttack("Moxxy");
	st.rangedAttack("Steve");
	st.displayStats();
	st.takeDamage(13);
	st.displayStats();
	st.beRepaired(123);
	st.displayStats();
	st.challengeNewcomer("Idiot");

	std::cout << std::endl;

	ClapTrap ct("ClapTrap");
	ct.meleeAttack("Vault Hunter");
	ct.rangedAttack("Crazy Earl");
	ct.displayStats();
	ct.takeDamage(13);
	ct.displayStats();
	ct.beRepaired(123);
	ct.displayStats();
	return (0);
}

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

int			main(void)
{
	ClapTrap ct("ClapTrap");
	FragTrap ft("FragTrap");
	ScavTrap st("ScavTrap");
	NinjaTrap nt("NinjaTrap");
	NinjaTrap ntclone = nt;

	nt.ninjaShoebox(ct);
	nt.ninjaShoebox(ft);
	nt.ninjaShoebox(st);
	nt.ninjaShoebox(nt);
	nt.ninjaShoebox(ntclone);
	return (0);
}

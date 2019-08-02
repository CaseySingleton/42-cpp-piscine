/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:56:14 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 22:56:15 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int			main(void)
{
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;

		ISquad* v1 = new Squad;
		ISquad* v2 = new Squad;

		v1->push(bob);
		v1->push(jim);
		v1->push(jim);
		// v1->push(new TacticalMarine);
		// v1->push(new TacticalMarine);
		// v1->push(new TacticalMarine);
		// v1->push(new AssaultTerminator);
		// v1->push(new AssaultTerminator);
		// v1->push(new TacticalMarine);
		std::cout << "Number of units: " <<  v1->getCount() << std::endl;
		for (int i = 0; i < v1->getCount(); i++)
		{
			ISpaceMarine* cur = v1->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
			v2->push(cur->clone());
		}
		delete v1;
		for (int i = 0; i < v2->getCount(); i++)
		{
			ISpaceMarine* cur = v2->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete v2;
	}
	std::cout << "End" << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:30:43 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:30:44 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int			main(void)
{

	Character* player = new Character("Easy Pete");

	std::cout << *player;

	Enemy* a = new SuperMutant();
	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	player->equipWeapon(pr);
	std::cout << *player;
	player->equipWeapon(pf);

	player->attack(b);
	std::cout << *player;
	player->equipWeapon(pr);
	std::cout << *player;
	player->attack(a);
	std::cout << *player;
	player->attack(a);
	std::cout << *player;

	return (0);
}

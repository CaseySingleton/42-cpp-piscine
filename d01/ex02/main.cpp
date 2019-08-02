/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:12:22 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 17:12:22 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int				main(void)
{
	ZombieEvent	zombieEvent;
	Zombie*		zombie; // Heap memory used because ZombieEvent returns zombie pointers

	zombie = zombieEvent.newZombie("Carl");
	delete(zombie);
	zombie = NULL;

	zombie = zombieEvent.randomChump();
	delete(zombie);
	zombie = NULL;

	zombieEvent.setZombieType("Slow");

	zombie = zombieEvent.newZombie("Bambino");
	delete(zombie);
	zombie = NULL;

	zombie = zombieEvent.randomChump();
	delete(zombie);
	zombie = NULL;
}

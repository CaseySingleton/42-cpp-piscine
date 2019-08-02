/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 19:49:59 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 19:50:00 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n)
{
	srand(time(0));
	std::cout << "Creating " << n << " zombies" << std::endl;
	std::string names[] = { "Frank", "Bill", "Stacy", "Karynne", "Cody", "Jamie" };
	_zombies = new Zombie[n]; // Stack memory
	for (int i = 0; i < n; i++)
	{
		_zombies[i].setName(names[(rand() % 6)]);
		_zombies[i].setType("Plant");
	}
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	for (int i = 0; i < _n; i++)
		_zombies[i].~Zombie();
	return ;
}

// Methods
void ZombieHorde::announce(void)
{
	for (int i = 0; i < _n; i++)
		_zombies[i].announce();
}

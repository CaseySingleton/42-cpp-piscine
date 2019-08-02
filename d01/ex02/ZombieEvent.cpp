/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:12:13 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 17:12:14 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : _type("Default")
{
	srand(time(0));
	return ;
}

ZombieEvent::ZombieEvent(std::string type) : _type(type)
{
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "Fun's over! No more zombies!" << std::endl;
	return ;
}

// Methods
Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, _type));
}

Zombie* ZombieEvent::randomChump(void)
{
	std::string zombNames[] = { "Zoombini", "Greg", "🧟‍♂️", "Plants", "vs.", "Zombies", "Stacy"};
	int choice = rand() % 7;
	Zombie *z = new Zombie(zombNames[choice], _type);
	z->announce();
	return (z);
}

// Setters
void ZombieEvent::setZombieType(std::string type)
{
	_type = type;
	return ;
}

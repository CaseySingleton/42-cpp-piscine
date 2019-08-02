/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:29:09 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:29:09 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(int health, int damageReduction, std::string const & type)
{
	setType(type);
	setHealth(health);
	setMaxHealth(health);
	setDamageReduction(damageReduction);
	return ;
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

// Operators
Enemy & Enemy::operator=(Enemy const & rhs)
{
	if (this != &rhs)
	{
		setType(rhs.getType());
		setHealth(rhs.getHealth());
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, const Enemy & rhs)
{
	o << rhs.getType() << " HP [" << rhs.getHealth() << "/" << rhs.getMaxHealth() << "]" << std::endl;

	return (o);
}

// Setters
void Enemy::setType(std::string const & type)
{
	_type = type;
	return ;
}

void Enemy::setHealth(int health)
{
	_health = health;
	return ;
}

void Enemy::setMaxHealth(int maxHealth)
{
	_maxHealth = maxHealth;
	return ;
}

void Enemy::setDamageReduction(int damageReduction)
{
	_damageRedutcion = damageReduction;
	return ;
}

// Getters
std::string Enemy::getType(void) const
{
	return (_type);
}

int Enemy::getHealth(void) const
{
	return (_health);
}

int Enemy::getMaxHealth(void) const
{
	return (_maxHealth);
}

int Enemy::getDamageReduction(void) const
{
	return (_damageRedutcion);
}

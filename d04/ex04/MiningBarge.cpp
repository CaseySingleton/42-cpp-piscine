/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:03:43 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:04:01 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MiningBarge.hpp"

MiningBarge::MiningBarge(void) : _maxNumberOfLasers(4), _numberOfLasers(0)
{
	for (unsigned i = 0; i < _maxNumberOfLasers; i++)
	{
		_lasers[i] = nullptr;
	}
	return ;
}

MiningBarge::MiningBarge(MiningBarge const & src)
{
	*this = src;
	return ;
}

MiningBarge::~MiningBarge(void)
{
	return ;
}

// Operators
MiningBarge & MiningBarge::operator=(MiningBarge const & rhs)
{
	if (this != &rhs)
	{
		for (unsigned i = 0; i < _maxNumberOfLasers; i++)
		{
			equip(rhs._lasers[i]);
		}
	}
	return (*this);
}

// Methods
void MiningBarge::equip(IMiningLaser * laser)
{
	if (_numberOfLasers < _maxNumberOfLasers)
	{
		_lasers[_numberOfLasers++] = laser;
	}
	else
	{
		std::cout << "Can not equip any more lasers" << std::endl;
	}
	return ;
}

void MiningBarge::mine(IAsteroid * asteroid) const
{
	for (unsigned i = 0; i < _numberOfLasers; i++)
	{
		_lasers[i]->mine(asteroid);
	}
	return ;
}

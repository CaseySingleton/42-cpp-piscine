/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:54:45 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 22:54:45 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	this->_first = nullptr;
	this->_last = nullptr;
	setCount(0);
	return ;
}

Squad::Squad(Squad const & parentSquad)
{
	_copyUnits(parentSquad);
	setCount(parentSquad.getCount());
	return ;
}

Squad::~Squad(void)
{
	_destroySquad();
	return ;
}

// Operators
Squad & Squad::operator=(Squad const & rhs)
{
	if (this != &rhs)
	{
		_copyUnits(rhs);
		setCount(rhs.getCount());
	}
	return (*this);
}

// Methods
bool Squad::_isInSquad(ISpaceMarine * marine) const
{
	for (struct Unit * cur = this->_first; cur != nullptr; cur = cur->next)
	{
		if (cur->unit == marine)
			return (true);
	}
	return (false);
}

void Squad::_copyUnits(Squad const & squad)
{
	int numberOfUnits = squad.getCount();

	for (int i = 0; i < numberOfUnits; i++)
	{
		push(squad.getUnit(i));
	}
	return ;
}

void Squad::_destroySquad(void)
{
	struct Unit * cur = nullptr;

	while (this->_first != nullptr)
	{
		cur = this->_first;
		this->_first = this->_first->next;
		delete cur->unit;
		delete cur;
	}
	setCount(0);
}

ISpaceMarine * Squad::getUnit(int unitPosition) const
{
	struct Unit * cur = nullptr;
	int totalUnits = getCount();

	if (unitPosition > -1 && unitPosition < totalUnits)
	{
		cur = this->_first;
		for (int i = 0; i < unitPosition; i++)
			cur = cur->next;
		return (cur->unit);
	}
	return (nullptr);
}

int Squad::push(ISpaceMarine * marine)
{
	Unit * recruit;

	if (_first == nullptr)
	{
		recruit = new Unit;
		recruit->unit = marine;
		recruit->next = nullptr;
		_first = recruit;
		_last = recruit;
		setCount(getCount() + 1);
	}
	else if (_isInSquad(marine) == false)
	{
		recruit = new Unit;
		recruit->unit = marine;
		recruit->next = nullptr;
		_last->next = recruit;
		_last = recruit;
		setCount(getCount() + 1);
	}
	return (getCount());
}

void Squad::battleCry(void) const
{
	int totalUnits = getCount();

	for (int i = 0; i < totalUnits; i++)
		getUnit(i)->battleCry();
}

void Squad::rangedAssault(void) const
{
	int totalUnits = getCount();

	for (int i = 0; i < totalUnits; i++)
		getUnit(i)->rangedAttack();
}

void Squad::meleeAssault(void) const
{
	int totalUnits = getCount();

	for (int i = 0; i < totalUnits; i++)
		getUnit(i)->meleeAttack();
}

// Setters
void Squad::setCount(int count)
{
	this->_count = count;
	return ;
}

// Getters
int Squad::getCount(void) const
{
	return (this->_count);
}

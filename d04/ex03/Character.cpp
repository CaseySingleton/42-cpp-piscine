/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:21:25 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:21:26 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	this->_materias = NULL;
	setName("Jimmy Neutron");
	setCount(0);
	setInventorySize(4);
}

Character::Character(std::string const & name)
{
	this->_materias = NULL;
	setName(name);
	setCount(0);
	setInventorySize(4);
}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character(void)
{
	return ;
}

// Operators
Character & Character::operator=(Character const & src)
{
	if (this != &src)
	{
		setInventorySize(src.getInventorySize());
	}
	return (*this);
}

// Methods
void Character::equip(AMateria * materia)
{
	struct Materias * temp;

	if (materia != NULL && getCount() < getInventorySize())
	{
		temp = new Materias;
		temp->materia = materia;
		temp->next = _materias;
		_materias = temp;
		setCount(getCount() + 1);
	}
}

void Character::unequip(unsigned int position)
{
	Materias * cur = _materias;
	Materias * prev = nullptr;
	unsigned int i = 0;

	if (cur != nullptr)
	{
		if (position == 0)
			_materias = _materias->next;
		else if (position == getCount() - 1)
		{
			while (cur->next != nullptr)
				cur = cur->next;
		}
		else
		{
			while (i < position)
			{
				prev = cur;
				cur = cur->next;
			}
			prev->next = cur->next;
		}
		delete cur;
		setCount(getCount() - 1);
	}
}

void Character::use(unsigned int position, ICharacter & target)
{
	if (position < getCount())
	{
		std::cout << getName() << "-> ";
		getMateria(position)->use(target);
	}
}

// Setters
void Character::setName(std::string const & name)
{
	this->_name = name;
}

void Character::setCount(unsigned int count)
{
	this->_count = count;
}

void Character::setInventorySize(unsigned int size)
{
	this->_inventorySize = size;
}

// Getters
std::string const & Character::getName(void) const
{
	return (this->_name);
}

AMateria * Character::getMateria(unsigned int position) const
{
	Materias * temp = this->_materias;

	if (position < getCount())
	{
		for (unsigned int i = 0; i < position; i++)
			temp = temp->next;
		return (temp->materia);
	}
	return (NULL);
}

unsigned int Character::getCount(void) const
{
	return (this->_count);
}

unsigned int Character::getInventorySize(void) const
{
	return (this->_inventorySize);
}

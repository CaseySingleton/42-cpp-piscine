/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:21:47 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:21:48 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->_materias = NULL;
	setInventorySize(4);
	setCount(0);
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	return ;
}

// Operators
MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		_copyMaterias(rhs);
		setInventorySize(rhs.getInventorySize());
		setCount(rhs.getCount());
	}
	return (*this);
}

// Methods
void MateriaSource::_copyMaterias(MateriaSource const & src)
{
	for (unsigned int i = 0; i < src.getCount(); i++)
		learnMateria(src.getMateria(i));
	return ;
}

void MateriaSource::learnMateria(AMateria * baseMateria)
{
	Materias * materia = new Materias;

	if (getCount() < getInventorySize())
	{
		materia->materia = baseMateria;
		materia->next = this->_materias;
		this->_materias = materia;
		setCount(getCount() + 1);
	}
	return ;
}

AMateria * MateriaSource::createMateria(std::string const & materiaType)
{
	AMateria * temp = nullptr;

	for (unsigned int i = 0; i < getCount(); i++)
	{
		temp = getMateria(i);
		if (temp->getType() == materiaType)
			return (temp->clone());
	}
	return (nullptr);
}

// Setters
void MateriaSource::setInventorySize(unsigned int size)
{
	this->_inventorySize = size;
	return ;
}

void MateriaSource::setCount(unsigned int count)
{
	this->_count = count;
	return ;
}

// Getters
unsigned int MateriaSource::getInventorySize(void) const
{
	return (this->_inventorySize);
}

unsigned int MateriaSource::getCount(void) const
{
	return (this->_count);
}

AMateria * MateriaSource::getMateria(unsigned int position) const
{
	struct Materias * cur = nullptr;

	if (position < getCount())
	{
		cur = this->_materias;
		for (unsigned int i = 0; i < position; i++)
			cur = cur->next;
		return (cur->materia);
	}
	return (nullptr);
}

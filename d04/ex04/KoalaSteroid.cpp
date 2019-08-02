/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:03:31 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:03:32 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid(void)
{
	setName("KoalaSteroid");
	return ;
}

KoalaSteroid::KoalaSteroid(KoalaSteroid const & src)
{
	*this = src;
	return ;
}

KoalaSteroid::~KoalaSteroid(void)
{
	return ;
}

// Operators
KoalaSteroid & KoalaSteroid::operator=(KoalaSteroid const & rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
	}
	return (*this);
}

// Methods
std::string KoalaSteroid::beMined(DeepCoreMiner * laser) const
{
	(void)laser;
	return ("Zazium");
}

std::string KoalaSteroid::beMined(StripMiner * laser) const
{
	(void)laser;
	return ("Krpite");
}

// Setters
void KoalaSteroid::setName(std::string const & name)
{
	_name = name;
	return ;
}

// Getters
std::string KoalaSteroid::getName(void) const
{
	return (_name);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:03:17 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:03:18 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog(void)
{
	setName("AsteroKreog");
	return ;
}

AsteroKreog::AsteroKreog(AsteroKreog const & src)
{
	*this = src;
	return ;
}

AsteroKreog::~AsteroKreog(void)
{
	return ;
}

// Operators
AsteroKreog & AsteroKreog::operator=(AsteroKreog const & rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
	}
	return (*this);
}

// Methods
std::string AsteroKreog::beMined(DeepCoreMiner * laser) const
{
	(void)laser;
	return ("Thorite");
}

std::string AsteroKreog::beMined(StripMiner * laser) const
{
	(void)laser;
	return ("Flavium");
}

// Setters
void AsteroKreog::setName(std::string const & name)
{
	_name = name;
	return ;
}

// Getters
std::string AsteroKreog::getName(void) const
{
	return (_name);
}

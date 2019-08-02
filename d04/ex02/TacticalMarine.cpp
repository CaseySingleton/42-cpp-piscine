/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:55:01 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 22:55:16 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
	*this = src;
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

// Operators
TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs)
{
	if (this != &rhs)
	{
		;
	}
	return (*this);
}

// Methods
ISpaceMarine * TacticalMarine::clone(void) const
{
	return (new TacticalMarine);
}

void TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT !" << std::endl;
	return ;
}

void TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with bolter *" << std::endl;
	return ;
}

void TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with chainsword *" << std::endl;
	return ;
}

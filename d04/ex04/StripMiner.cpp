/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:03:03 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:03:04 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "StripMiner.hpp"
#include "IAsteroid.hpp"

StripMiner::StripMiner(void)
{
	return ;
}

StripMiner::StripMiner(StripMiner const & src)
{
	*this = src;
	return ;
}

StripMiner::~StripMiner(void)
{
	return ;
}

// Operators
StripMiner & StripMiner::operator=(StripMiner const & rhs)
{
	if (this != &rhs)
	{
		;
	}
	return (*this);
}

// Methods
void StripMiner::mine(IAsteroid * asteroid)
{
	std::string result = asteroid->beMined(this);
	std::cout << result << std::endl;
}

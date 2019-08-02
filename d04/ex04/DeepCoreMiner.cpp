/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:02:50 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:02:51 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void)
{
	return ;
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const & src)
{
	*this = src;
	return ;
}

DeepCoreMiner::~DeepCoreMiner(void)
{
	return ;
}

// Operators
DeepCoreMiner & DeepCoreMiner::operator=(DeepCoreMiner const & rhs)
{
	if (this != &rhs)
	{
		;
	}
	return (*this);
}

// Methods
void DeepCoreMiner::mine(IAsteroid * asteroid)
{
	std::string result = asteroid->beMined(this);
	std::cout << result << std::endl;
}

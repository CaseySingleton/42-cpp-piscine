/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:42:39 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 20:42:40 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	setBrainAddress();
	return ;
}

Brain::~Brain(void)
{
	return ;
}

std::string Brain::identify(void) const
{
	return (this->_brainAddress);
}

// Setters

void Brain::setBrainAddress(void)
{
	std::stringstream ss;
	ss << this;
	this->_brainAddress = ss.str();
}

// Getters

std::string Brain::getBrainAddress(void) const
{
	return (this->_brainAddress);
}

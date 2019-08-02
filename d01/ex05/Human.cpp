/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:42:49 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 20:42:49 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return ;
}

Human::~Human(void)
{
	return ;
}

std::string Human::identify(void) const
{
	return (this->_brain.identify());
}

// Getters

const Brain Human::getBrain(void) const
{
	return(this->_brain);
}

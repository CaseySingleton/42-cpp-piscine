/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:26:41 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/17 13:26:42 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default Constructor" << std::endl;
	return ;
}

Fixed::Fixed(int const value) : _fixedPointValue(value)
{
	std::cout << "Parameterized Constructor" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy Constructor" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed Class Deconstructor" << std::endl;
	return ;
}

// Operators
Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignment Opperator" << std::endl;
	if (this != &rhs)
		_fixedPointValue = rhs.getRawBits();
	return (*this);
}

// Setters
void Fixed::setRawBits(int const raw)
{
	std::cout << "  setRawBits Member Function" << std::endl;
	_fixedPointValue = raw;
}

// Getters
int Fixed::getRawBits(void) const
{
	std::cout << "  getRawBits Member Function" << std::endl;
	return (_fixedPointValue);
}

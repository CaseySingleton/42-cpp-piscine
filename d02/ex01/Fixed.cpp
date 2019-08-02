/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:09:00 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/17 13:34:03 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default Constructor" << std::endl;
	return ;
}

Fixed::Fixed(int const value) : _fixedPointValue(value << _fractionalBits)
{
	std::cout << "Int Constructor" << std::endl;
	return ;
}

Fixed::Fixed(float const value) : _fixedPointValue(roundf(value * (1 << _fractionalBits)))
{
	std::cout << "Float Constructor" << std::endl;
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
	std::cout << "Deconstructor" << std::endl;
	return ;
}

// Methods
int Fixed::toInt(void) const
{
	// std::cout << "To Int" << std::endl;
	return ((int)(_fixedPointValue) >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
	// std::cout << "To Float" << std::endl;
	return ((float)_fixedPointValue / (float)(1 << _fractionalBits));
}

// Operators
Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignment Operator" << std::endl;
	if (this != &rhs)
		_fixedPointValue = rhs.getRawBits();
	return (*this);
}


std::ostream & operator<<(std::ostream & o, Fixed const & f)
{
	// std::cout << "Ostream operator" << std::endl;
	o << f.toFloat();

	return (o);
}

// Setters
void Fixed::setRawBits(int const raw)
{
	// std::cout << "  setRawBits Member Function" << std::endl;
	_fixedPointValue = raw;
	return ;
}

// Getters
int Fixed::getRawBits(void) const
{
	// std::cout << "  getRawBits Member Function" << std::endl;
	return (_fixedPointValue);
}

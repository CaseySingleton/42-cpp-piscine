/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:09:00 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/17 13:36:08 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _fixedPointValue(0)
{
	return ;
}

Fixed::Fixed(int const value) : _fixedPointValue(value << _fractionalBits)
{
	return ;
}

Fixed::Fixed(float const value) : _fixedPointValue(roundf(value * (1 << _fractionalBits)))
{
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

int Fixed::toInt(void) const
{
	return ((int)(_fixedPointValue) >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)_fixedPointValue / (float)(1 << _fractionalBits));
}

// Operators

Fixed & Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		_fixedPointValue = rhs.getRawBits();
	return (*this);
}

Fixed &Fixed::operator++(void)
{
	_fixedPointValue += 1;

	return (*this);
}

Fixed &Fixed::operator--(void)
{
	_fixedPointValue -= 1;

	return (*this);
}

Fixed Fixed::operator+(int)
{
	Fixed ret(*this);
	operator++();
	return (ret);
}

Fixed Fixed::operator-(int)
{
	Fixed ret(*this);
	operator--();
	return (ret);
}

Fixed Fixed::operator+(Fixed const & rhs)
{
	return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const & rhs)
{
	return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs)
{
	return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const & rhs)
{
	return (Fixed(toFloat() * rhs.toFloat()));
}

void Fixed::operator+=(Fixed const & rhs)
{
	*this = Fixed(toFloat() + rhs.toFloat());
}

void Fixed::operator-=(Fixed const & rhs)
{
	*this = Fixed(toFloat() - rhs.toFloat());
	return ;
}

void Fixed::operator/=(Fixed const & rhs)
{
	*this = Fixed(toFloat() / rhs.toFloat());
	return ;
}

void Fixed::operator*=(Fixed const & rhs)
{
	*this = Fixed(toFloat() * rhs.toFloat());
	return ;
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (_fixedPointValue == rhs._fixedPointValue);
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (_fixedPointValue != rhs._fixedPointValue);
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return (_fixedPointValue > rhs._fixedPointValue);
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (_fixedPointValue < rhs._fixedPointValue);
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (_fixedPointValue >= rhs._fixedPointValue);
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (_fixedPointValue <= rhs._fixedPointValue);
}

std::ostream & operator<<(std::ostream & o, Fixed const & f)
{
	o << f.toFloat();

	return (o);
}

// Setters
void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
	return ;
}

// Getters
int Fixed::getRawBits(void) const
{
	return (_fixedPointValue);
}

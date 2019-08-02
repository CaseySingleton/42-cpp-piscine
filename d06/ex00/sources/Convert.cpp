/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:04:59 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/23 14:05:00 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
	return ;
}

Convert::Convert(std::string input) : _input(input)
{
	return ;
}

Convert::Convert(Convert const & src) : _input(src.getInput())
{
	return ;
}

Convert::~Convert(void)
{
	return ;
}

// Operators
Convert & Convert::operator=(Convert const & rhs)
{
	if (this != &rhs)
	{
		setInput(rhs.getInput());
	}
	return (*this);
}
Convert::operator char(void) const
{
	char c;

	try
	{
		c = stoi(getInput());
		return (static_cast<char>(c));
	}
	catch (const std::exception &e)
	{
		throw (ConversionException());
	}
}

Convert::operator int(void) const
{
	int i;

	try
	{
		i = stoi(getInput());
		return (static_cast<int>(i));
	}
	catch (const std::exception &e)
	{
		throw (ConversionException());
	}
}

Convert::operator float(void) const
{
	float f;

	try
	{
		f = stof(getInput());
		return (static_cast<float>(f));
	}
	catch (const std::exception &e)
	{
		throw (ConversionException());
	}
}

Convert::operator double(void) const
{
	double d;

	try
	{
		d = stod(getInput());
		return (static_cast<double>(d));
	}
	catch (const std::exception &e)
	{
		throw (ConversionException());
	}
}

// Setters
void Convert::setInput(std::string input)
{
	_input = input;
	return ;
}

// Getters
std::string Convert::getInput(void) const
{
	return (_input);
}

// Exception Class
Convert::ConversionException::ConversionException(void)
{
	return ;
}

Convert::ConversionException::ConversionException(ConversionException const & src)
{
	(void)src;
}

Convert::ConversionException::~ConversionException(void) throw()
{
	return ;
}

Convert::ConversionException & Convert::ConversionException::operator=(ConversionException const & rhs)
{
	(void)rhs;
	return (*this);
}

// Methods
const char * Convert::ConversionException::what(void) const throw()
{
	return ("Impossible");
}

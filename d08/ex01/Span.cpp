/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:26:04 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/09 14:26:05 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	setSize(10);
	return ;
}

Span::Span(unsigned size) : _size(size)
{
	return ;
}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}

Span::~Span(void)
{
	return ;
}

// Operators
Span & Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		setSize(rhs.getSize());
	}
	return (*this);
}

void Span::operator+=(int n)
{
	addNumber(n);
	return ;
}

std::ostream & operator<<(std::ostream & o, Span const & obj)
{
	std::vector<int> storage_copy = obj.getStorage();
	o << "[";
	for (std::vector<int>::iterator it = storage_copy.begin(); it != storage_copy.end(); it++)
	{
		if (it != storage_copy.begin())
			o << ", ";
		o << *it;
	}
	o << "]" << std::endl;

	return (o);
}

// Methods
void Span::addNumber(int n)
{
	if (this->_storage.size() < getSize())
	{
		this->_storage.push_back(n);
	}
	else
	{
		throw Span::SizeLimitReachedException();
	}
}

unsigned int Span::shortestSpan(void)
{
	if (this->_storage.size() < 2)
		throw Span::NotEnoughElementsException();

	unsigned int shortest = INT_MAX;
	unsigned int temp;
	std::vector<int> storage_copy = this->_storage;
	std::sort(storage_copy.begin(), storage_copy.end());

	for (std::vector<int>::iterator it = storage_copy.begin() + 1; it != storage_copy.end(); it++)
	{
		// std::cout << *(it - 1) << std::endl;
		temp = abs(*(it - 1) - *it);
		if (temp < shortest)
			shortest = temp;
	}
	return (shortest);
}

unsigned int Span::longestSpan(void)
{
	if (this->_storage.size() < 2)
		throw Span::NotEnoughElementsException();

	int min = *std::min_element(this->_storage.begin(), this->_storage.end());
	int max = *std::max_element(this->_storage.begin(), this->_storage.end());

	return (max - min);
}

// Setters
void Span::setSize(unsigned int size)
{
	this->_size = size;
}

// Getters
unsigned int Span::getSize(void) const
{
	return (this->_size);
}

std::vector <int> Span::getStorage(void) const
{
	return (this->_storage);
}

// Exception Class
Span::NotEnoughElementsException::NotEnoughElementsException(void)
{
	return ;
}

Span::NotEnoughElementsException::NotEnoughElementsException(NotEnoughElementsException const & src)
{
	*this = src;
}

Span::NotEnoughElementsException::~NotEnoughElementsException(void) throw()
{
	return ;
}

// Operators
Span::NotEnoughElementsException & Span::NotEnoughElementsException::operator=(NotEnoughElementsException const & rhs)
{
	(void)rhs;
	return (*this);
}

// Methods
const char * Span::NotEnoughElementsException::what(void) const throw()
{
	return ("Need at least two elements");
}

// Exception Class
Span::SizeLimitReachedException::SizeLimitReachedException(void)
{
	return ;
}

Span::SizeLimitReachedException::SizeLimitReachedException(SizeLimitReachedException const & src)
{
	*this = src;
}

Span::SizeLimitReachedException::~SizeLimitReachedException(void) throw()
{
	return ;
}

// Operators
Span::SizeLimitReachedException & Span::SizeLimitReachedException::operator=(SizeLimitReachedException const & rhs)
{
	(void)rhs;
	return (*this);
}

// Methods
const char * Span::SizeLimitReachedException::what(void) const throw()
{
	return ("Size limit reached");
}

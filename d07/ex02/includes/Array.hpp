/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:56:27 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/24 16:56:28 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <exception>
# include <iostream>

template <typename T>
class Array
{
	private:
		size_t _size;
		T * _array;

	public:
		Array<T>(void) : _size(0), _array(nullptr) {}
		Array<T>(size_t size) : _size(size), _array(new T[size]) {}
		Array<T>(Array const & src)
		{
			*this = src;
		}
		~Array<T>(void)
		{
			delete [] _array;
		}
		// Operators
		Array<T> & operator=(Array const & rhs)
		{
			delete [] _array;
			_size = rhs._size;
			_array = new T[rhs._size];
			for (size_t i = 0; i < rhs._size; i++)
				_array[i] = rhs._array[i];
			return (*this);
		}
		T & operator[](size_t i)
		{
			return (_array[i]);
		}
		// Methods
		void print(void)
		{
			std::cout << "{ ";
			for (size_t i = 0; i < _size; i++)
			{
				std::cout << _array[i];
				if (i + 1 != _size)
					std::cout << ", ";
			}
			std::cout << " }" << std::endl;
		}
		// Getters
		size_t length(void)
		{
			return (_size);
		}
};

#endif

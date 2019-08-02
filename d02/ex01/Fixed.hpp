/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:08:56 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/17 13:34:10 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _fixedPointValue;
		static int const _fractionalBits;

	public:
		Fixed(void);
		Fixed(int const);
		Fixed(float const);
		Fixed(Fixed const &);
		~Fixed(void);
		// Methods
		int toInt(void) const;
		float toFloat(void) const;
		// Operators
		Fixed & operator=(Fixed const &);
		// Setters
		void setRawBits(int const);
		// Getters
		int getRawBits(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & f);

# endif

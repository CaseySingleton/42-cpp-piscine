/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:26:45 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/17 13:26:46 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits;

	public:
		Fixed(void);
		Fixed(int const);
		Fixed(Fixed const &);
		~Fixed(void);
		// Operators
		Fixed & operator=(Fixed const &);
		// Setters
		void setRawBits(int const);
		// Getters
		int getRawBits(void) const;
};

# endif

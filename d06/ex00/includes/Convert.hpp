/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:05:05 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/23 14:05:06 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <exception>

class Convert
{
	private:
		std::string _input;

	public:
		Convert(void);
		Convert(std::string);
		Convert(Convert const &);
		~Convert(void);
		// Operators
		Convert & operator=(Convert const &);
		operator char(void) const;
		operator int(void) const;
		operator float(void) const;
		operator double(void) const;
		// Setters
		void setInput(std::string);
		// Getters
		std::string getInput(void) const;
		

		class ConversionException : public std::exception
		{
			public:
				ConversionException(void);
				ConversionException(ConversionException const &);
				~ConversionException(void) throw();
				// Operator
				ConversionException & operator=(ConversionException const &);
				// Methods
				const char * what(void) const throw();
		};
};

#endif

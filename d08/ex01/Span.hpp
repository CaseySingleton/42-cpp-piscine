/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:26:01 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/09 14:26:02 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span
{
	private:
		std::vector<int> _storage;
		unsigned int _size;

	public:
		Span(void);
		Span(unsigned);
		Span(Span const &);
		~Span(void);
		// Operators
		Span & operator=(Span const &);
		void operator+=(int);
		// Methods
		void addNumber(int);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		// Setters
		void setSize(unsigned int);
		// Getters
		unsigned int getSize(void) const;
		std::vector<int> getStorage(void) const;

			class NotEnoughElementsException : public std::exception
			{
				public:
					NotEnoughElementsException(void);
					NotEnoughElementsException(NotEnoughElementsException const &);
					~NotEnoughElementsException(void) throw();
					// Operators
					NotEnoughElementsException & operator=(NotEnoughElementsException const &);
					// Methods
					const char * what(void) const throw();
			};

			class SizeLimitReachedException : public std::exception
			{
				public:
					SizeLimitReachedException(void);
					SizeLimitReachedException(SizeLimitReachedException const &);
					~SizeLimitReachedException(void) throw();
					// Operators
					SizeLimitReachedException & operator=(SizeLimitReachedException const &);
					// Methods
					const char * what(void) const throw();
			};
};

std::ostream & operator<<(std::ostream &, Span const &);

#endif

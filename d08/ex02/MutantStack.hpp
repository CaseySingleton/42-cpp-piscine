/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 15:46:46 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/09 15:46:46 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <list>
#include <stack>

// https://en.cppreference.com/w/cpp/container/stack <- 👌

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator msIterator;

	public:
		MutantStack(void) : std::stack<T>() {}
		MutantStack(std::stack<T> const & src) : std::stack<T>(src) {}
		MutantStack(MutantStack const & src) : std::stack<T>(src) {}
		virtual ~MutantStack(void) {}
		// Operators
		using std::stack<T>::operator=;
		// Methods
		// void push(T value)
		// {
		// 	std::stack<T>::push(value);
		// }
		// void pop(void)
		// {
		// 	if (std::stack<T>::size() > 0)
		// 	{
		// 		std::stack<T>::pop();
		// 	}
		// }
		msIterator begin(void)
		{
			return (std::begin(std::stack<T>::c));
		}
		msIterator end(void)
		{
			return (std::end(std::stack<T>::c));
		}
};

#endif

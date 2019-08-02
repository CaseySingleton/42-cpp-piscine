/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:50:53 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/17 13:50:53 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
# define STACK_HPP

# include <string>
# include "Fixed.hpp"

struct Node
{
	Fixed number;
	struct Node * next;
};

class Stack
{
	private:
		Node * _top;

	public:
		Stack(void);
		~Stack(void);
		// Methods
		void push(float);
		Fixed pop(void);
		bool isEmpty(void) const;
};

#endif

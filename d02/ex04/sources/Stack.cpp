/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:50:45 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/17 13:50:45 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stack.hpp"

Stack::Stack(void) : _top(nullptr)
{
	return ;
}

Stack::~Stack(void)
{
	Node * temp = nullptr;

	// while (_top != nullptr)
	// {
	// 	temp = _top->next;
	// 	delete(_top);
	// 	_top = temp;
	// }
	return ;
}

// Methods
void Stack::push(float n)
{
	Node * node = new Node();
	node->number = Fixed(n);
	node->next = _top;
	_top = node;
	return ;
}

Fixed Stack::pop(void)
{
	if (_top == nullptr)
		return (Fixed(0));
	Node * temp = _top;
	Fixed n = temp->number;
	_top = _top->next;
	delete(temp);
	return (n);
}

bool Stack::isEmpty(void) const
{
	return (_top == NULL);
}

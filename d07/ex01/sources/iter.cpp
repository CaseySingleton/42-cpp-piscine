/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:33:55 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/24 16:33:56 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <class T>
void			iter(T *array, unsigned length, void (* function)(T &))
{
	for (unsigned i = 0; i < length; i++)
	{
		function(array[i]);
	}
}

template <class T>
void			printAnything(T item)
{
	std::cout << item << std::endl;
}

void			swapSign(int & i)
{
	i = (~(i) + 1);
}

void			shouting(char & c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 'a' - 'A';
	}
}

int				main(void)
{
	char		s[] = "Hello, Templates!";
	int			i[] = { 1, 2, 6, 545, 939, -234 };
	unsigned	len = strlen(s);

	std::cout << "Before: s: " << s << std::endl;
	iter(s, len, shouting);
	std::cout << "After: s: " << s << std::endl;
	std::cout << "Before i: " << std::endl;;
	iter(i, 6, printAnything);
	iter(i, 6, swapSign);
	std::cout << "After: i: " << std::endl;
	iter(i, 6, printAnything);
	return (0);
}

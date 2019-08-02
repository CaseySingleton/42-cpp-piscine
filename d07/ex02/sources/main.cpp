/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:46:38 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/24 17:46:38 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int				main(void)
{
	Array<int> a(10);
	Array<int> b;

	for (int i = 0; i < a.length(); i++)
	{
		a[i] = i;
	}
	std::cout << "size: " << a.length() << std::endl;
	a.print();
	b = a;
	a[3] = 123;
	a.print();
	b.print();
	b = a;
	a.print();
	b.print();
	b[0] = -1;
	b[3] = 42;
	a.print();
	b.print();

	return (0);
}

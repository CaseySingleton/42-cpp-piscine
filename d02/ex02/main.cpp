/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:28:19 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/17 13:36:14 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int			main(void)
{
	Fixed	a(42);
	Fixed	b(2);
	Fixed	c = a;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << a << " == " << b << ": " << ((a == b) ? "True" : "False") << std::endl;
	std::cout << a << " == " << c << ": " << ((a == c) ? "True" : "False") << std::endl;
	std::cout << a << " != " << b << ": " << ((a != b) ? "True" : "False") << std::endl;
	std::cout << a << " != " << c << ": " << ((a != c) ? "True" : "False") << std::endl;
	std::cout << a << " < " << b << " : " << ((a < b) ? "True" : "False") << std::endl;
	std::cout << a << " < " << c << " : " << ((a < c) ? "True" : "False") << std::endl;
	std::cout << a << " <= " << b << ": " << ((a <= b) ? "True" : "False") << std::endl;
	std::cout << a << " <= " << c << ": " << ((a <= c) ? "True" : "False") << std::endl;
	std::cout << a << " + " << b << " : " << a + b << std::endl;
	std::cout << a << " - " << b << " : " << a - b << std::endl;
	std::cout << a << " / " << b << " : " << a / b << std::endl;
	std::cout << a << " * " << b << " : " << a * b << std::endl;
	a += b;
	std::cout << a << std::endl;
	a -= b;
	std::cout << a << std::endl;
	a /= b;
	std::cout << a << std::endl;
	a *= b;
	std::cout << a << std::endl;
	return (0);
}

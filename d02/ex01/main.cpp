/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:28:19 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/17 13:34:18 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int			main(void)
{
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is: " << a << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "d is: " << d << std::endl;

	std::cout << "a is: " << a.toInt() <<  " as integer" << std::endl;
	std::cout << "b is: " << b.toInt() <<  " as integer" << std::endl;
	std::cout << "c is: " << c.toInt() <<  " as integer" << std::endl;
	std::cout << "d is: " << d.toInt() <<  " as integer" << std::endl;
	return (0);
}

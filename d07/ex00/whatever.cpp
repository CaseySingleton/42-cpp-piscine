/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:18:23 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/24 16:18:24 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
void printVars(T & a, T & b, std::string aName, std::string bName)
{
	std::cout << aName << ": " << a << ", " << bName << ": " << b << std::endl;
}

template <class T>
T & max(T & a, T & b)
{
	if (a > b)
		return (a);
	return (b);
}

template <class T>
T & min(T & a, T & b)
{
	if (a < b)
		return (a);
	return (b);
}

template <class T>
void swap(T & a, T & b)
{
	T temp = a;
	a = b;
	b = temp;
}

int				main(void)
{
	int			i1 = 123;
	int			i2 = -37;
	float		f1 = 42.42f;
	float		f2 = 0.37f;

	// Swap
	printVars(i1, i2, "i1", "i2");
	swap(i1, i2);
	printVars(i1, i2, "i1", "i2");
	printVars(f1, f2, "f1", "f2");
	swap(f1, f2);
	printVars(f1, f2, "f1", "f2");

	// Min
	std::cout << "Min of " << i1 << " and " << i2 << " is: " << min(i1, i2) << std::endl;
	std::cout << "Min of " << f1 << " and " << f2 << " is: " << min(f1, f2) << std::endl;

	// Max
	std::cout << "Max of " << i1 << " and " << i2 << " is: " << max(i1, i2) << std::endl;
	std::cout << "Max of " << f1 << " and " << f2 << " is: " << max(f1, f2) << std::endl;

	// Provided test code
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}

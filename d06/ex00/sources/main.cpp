/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:05:28 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/23 14:05:28 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Convert.hpp"

static void		convert_to_char(Convert &conversion)
{
	std::cout << "char: ";
	try
	{
		char c = static_cast<char>(conversion);

		if (c > 31 && c < 127)
			std::cout << c << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (Convert::ConversionException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

static void		convert_to_int(Convert &conversion)
{
	std::cout << "int: ";
	try
	{
		int i = static_cast<int>(conversion);

		std::cout << i << std::endl;
	}
	catch (Convert::ConversionException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

static void		convert_to_float(Convert &conversion)
{
	std::cout << "float: ";
	try
	{
		float f = static_cast<float>(conversion);

		std::cout << std::fixed;
		std::cout << std::setprecision(1);
		std::cout << f << "f" << std::endl;
	}
	catch (Convert::ConversionException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

static void		convert_to_double(Convert &conversion)
{
	std::cout << "double: ";
	try
	{
		double d = static_cast<double>(conversion);

		std::cout << std::fixed;
		std::cout << std::setprecision(1);
		std::cout << d << std::endl;
	}
	catch (Convert::ConversionException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int				main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Convert conversion(argv[1]);

		convert_to_char(conversion);
		convert_to_int(conversion);
		convert_to_float(conversion);
		convert_to_double(conversion);
	}
	else
	{
		std::cout << "Usage: ./convert [number] -- only a single argument is allowed" << std::endl;
	}
	return (0);
}

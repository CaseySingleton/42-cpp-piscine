/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:26:07 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/09 14:26:08 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int			main(void)
{
	srand(time(NULL));

	Span s;

	try
	{
		s = Span(10);
	}
	catch (Span::NotEnoughElementsException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Span::SizeLimitReachedException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	for (int i = 0; i < 10; i++)
	{
		int temp = rand() % 999;
		try
		{
			s += temp;
		}
		catch (Span::NotEnoughElementsException & e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Span::SizeLimitReachedException & e)
		{
			std::cout << e.what() << std::endl;
		}

		catch (const std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	try
	{
		int shortest = s.shortestSpan();
		std::cout << "Shortest span: " << shortest << std::endl;
	}
	catch (Span::NotEnoughElementsException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Span::SizeLimitReachedException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		int longest = s.longestSpan();
		std::cout << "Longest span: " << longest << std::endl;
	}
	catch (Span::NotEnoughElementsException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Span::SizeLimitReachedException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

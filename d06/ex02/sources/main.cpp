/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:57:27 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/23 15:57:27 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>

class Base
{
	public:
		virtual ~Base(void) {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base			*generate(void)
{
	int			choice = rand() % 3;

	if (choice == 0)
	{
		std::cout << "Class A created" << std::endl;
		return (new A());
	}
	else if (choice == 1)
	{
		std::cout << "Class B created" << std::endl;
		return (new B());
	}
	else if (choice == 2)
	{
		std::cout << "Class C created" << std::endl;
		return (new C());
	}
	std::cout << "Something went wrong" << std::endl;
	return (nullptr);
}

void			identify_from_pointer(Base * p)
{
	std::cout << "Identify from pointer" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "  The child class of Base is A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "  The child class of Base is B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "  The child class of Base is C" << std::endl;
}

void identify_from_reference(Base & p)
{
	std::cout << "Identify from reference" << std::endl;
	if (dynamic_cast<A*>(&p))
		std::cout << "  The child class of Base is A" << std::endl;
	if (dynamic_cast<B*>(&p))
		std::cout << "  The child class of Base is B" << std::endl;
	if (dynamic_cast<C*>(&p))
		std::cout << "  The child class of Base is C" << std::endl;
}

int				main(void)
{
	Base		*b;

	srand(time(0));
	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete(b);
	return (0);
}

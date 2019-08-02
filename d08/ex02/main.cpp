/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 15:47:19 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/09 15:47:20 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "MutantStack.hpp"

int			main(void)
{
	MutantStack<int> mstack; mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
	MutantStack<int>::msIterator it = mstack.begin(); MutantStack<int>::msIterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
			std::cout << *it << std::endl;
	++it; }
	std::stack<int> s(mstack);

	srand(time(0));
	MutantStack<int> mutantStack;

	std::cout << "\033[0;36mSetting up a MutantStack with values 0 - 9\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
		mutantStack.push(rand() % 100);
	std::cout << "MutantStack size: " << mutantStack.size() << std::endl << std::endl;
	MutantStack<int>::msIterator it = mutantStack.begin();
	MutantStack<int>::msIterator ite = mutantStack.end();
	std::cout << "\033[0;36mCreated start iterator and end iterator using \033[0;32m.begin() \033[0;36mand\033[0m \033[0;32m.end()\033[0m" << std::endl << std::endl;
	std::cout << "\033[0;36mUsing \033[0;32miterators \033[0;36mto view stack contents:\033[0m" << std::endl;
	std::cout << "[";
	while (it != ite)
	{
		std::cout << *it;
		if (it + 1 != ite)
			std::cout << ", ";
		it++;
	}
	std::cout << "]" << std::endl << std::endl;
	std::cout << "\033[0;36mUsing \033[0;32m.empty() \033[0;36mto loop through and \033[0;32m.pop() \033[0;36mvalues\033[0m" << std::endl;
	while (mutantStack.empty() == false)
	{
		std::cout << "mutantStack.top(): " << mutantStack.top() << std::endl;
		std::cout << "mutantStack.pop()" << std::endl;
		mutantStack.pop();
	}
	mutantStack.pop();
	std::cout << std::endl << "\033[0;36mIs the stack \033[0;32m.empty()\033[0;36m: \033[0m" << ((mutantStack.empty() == true) ? "Yes" : "No") << std::endl;
	return (0);
}

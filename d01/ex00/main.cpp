/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:40:40 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 16:40:41 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void			ponyOnTheHeap(void)
{
	Pony		*heapPony = new Pony();

	heapPony->namePony("Heap");
	heapPony->evolve();
	heapPony->makeSound();
	delete(heapPony);
	return ;
}

void			ponyOnTheStack(void)
{
	Pony		stackPony;

	stackPony.namePony("Stack");
	stackPony.evolve();
	stackPony.makeSound();
	return ;
}

int				main(void)
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
}

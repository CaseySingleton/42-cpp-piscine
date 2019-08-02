/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:18:09 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 15:18:10 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

// Emperor of the Kuzconian Empire

int			main(void)
{
	Sorcerer yzma("Yzma", "Royal Advisor");
	Victim kusco("Kuzco");
	Peon krunk("Krunk");

	std::cout << yzma << kusco << krunk;

	yzma.polymorph(kusco);
	yzma.polymorph(krunk);
	return (0);
}

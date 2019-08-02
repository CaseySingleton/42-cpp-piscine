/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:22:34 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:22:34 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int			main(void)
{
	IMateriaSource * src = new MateriaSource;
	ICharacter * p1 = new Character("Carl Wheezer");
	ICharacter * p2 = new Character("Jimmy Neutron");

	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	p1->equip(src->createMateria("Ice"));
	p1->equip(src->createMateria("Fire"));
	p1->equip(src->createMateria("Cure"));
	p2->equip(src->createMateria("Ice"));
	p2->equip(src->createMateria("Cure"));

	p1->use(1, *p2);
	p2->use(1, *p1);
	p1->use(0, *p1);
	p2->use(1, *p1);
	p1->use(1, *p1);
	return (0);
}

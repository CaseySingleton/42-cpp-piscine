/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:58:49 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 22:58:49 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad(void) {};
		virtual int getCount(void) const = 0; // Returns the number of units currently in the squad
		virtual ISpaceMarine * getUnit(int) const = 0; // Returns pointer to unit at given index
		virtual int push(ISpaceMarine *) = 0; // Adds unit to the back of the squad and returns total units in squad
};

#endif

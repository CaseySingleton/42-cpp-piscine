/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:56:03 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 22:56:04 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>
# include <string>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine(void) {}; // Upon creation: "Tactical Marine ready for battle"
		virtual ISpaceMarine * clone(void) const = 0; // Returns a copy of the current object
		virtual void battleCry(void) const = 0; // displays "For the holy PLOT !"
		virtual void rangedAttack(void) const = 0; // displays "* attacks with bolter *"
		virtual void meleeAttack(void) const = 0; // displayes "* attacks with chainsword *"
		// Upon death display "Aaargh ..."
};

#endif

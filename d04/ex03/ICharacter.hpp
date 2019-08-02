/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:22:00 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:22:00 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		ICharacter(void) {}
		virtual ~ICharacter(void) {}
		virtual void equip(AMateria *) = 0;
		virtual void unequip(unsigned int) = 0;
		virtual void use(unsigned int, ICharacter & target) = 0;
		virtual std::string const & getName() const = 0;
};

#endif

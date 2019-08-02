/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:55:05 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 22:55:05 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &);
		~TacticalMarine(void);
		// Operators
		TacticalMarine & operator=(TacticalMarine const &);
		// Methods
		ISpaceMarine * clone(void) const;
		void battleCry(void) const;
		void rangedAttack(void) const;
		void meleeAttack(void)const;
};

#endif

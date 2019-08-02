/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:54:50 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 22:54:50 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

struct Unit
{
	ISpaceMarine * unit;
	struct Unit * next;
};

class Squad : public ISquad
{
	private:
		// Variables
		struct Unit * _first;
		struct Unit * _last;
		int _count;
		// Methods
		bool _isInSquad(ISpaceMarine *) const;
		void _copyUnits(Squad const &);
		void _destroySquad(void);

	public:
		Squad(void);
		Squad(Squad const &);
		~Squad(void);
		// Operators
		Squad & operator=(Squad const &);
		// Methods
		ISpaceMarine * getUnit(int) const;
		int push(ISpaceMarine *);
		void battleCry(void) const;
		void rangedAssault(void) const;
		void meleeAssault(void) const;
		// Setters
		void setCount(int);
		// Getters
		int getCount(void) const;
};

#endif

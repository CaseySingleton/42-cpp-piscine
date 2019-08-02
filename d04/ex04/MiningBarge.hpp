/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:03:47 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:03:47 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{
	private:
		IMiningLaser * _lasers[4];
		unsigned _maxNumberOfLasers;
		unsigned _numberOfLasers;

	public:
		MiningBarge(void);
		MiningBarge(MiningBarge const &);
		~MiningBarge(void);
		// Operators
		MiningBarge & operator=(MiningBarge const &);
		// Methods
		void equip(IMiningLaser *);
		void mine(IAsteroid *) const;
};

#endif

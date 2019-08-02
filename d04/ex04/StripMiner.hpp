/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:03:08 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:03:09 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
	public:
		StripMiner(void);
		StripMiner(StripMiner const &);
		~StripMiner(void);
		// Operators
		StripMiner & operator=(StripMiner const &);
		// Methods
		void mine(IAsteroid *);
};

#endif

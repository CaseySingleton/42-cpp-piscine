/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:29:39 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:29:39 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(int, int);
		RadScorpion(RadScorpion const &);
		~RadScorpion(void);
		// Operators
		RadScorpion & operator=(RadScorpion const &);
		// Methods
		void takeDamage(int);
};

#endif

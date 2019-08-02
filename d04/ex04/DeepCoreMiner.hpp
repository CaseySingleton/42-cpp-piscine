/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:02:55 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:02:55 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner(void);
		DeepCoreMiner(DeepCoreMiner const &);
		~DeepCoreMiner(void);
		// Operators
		DeepCoreMiner & operator=(DeepCoreMiner const &);
		// Methods
		void mine(IAsteroid *);
};

#endif

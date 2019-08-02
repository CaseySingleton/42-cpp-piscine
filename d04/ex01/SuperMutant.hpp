/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:29:25 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:29:26 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:

	protected:

	public:
		SuperMutant(void);
		SuperMutant(int, int);
		SuperMutant(SuperMutant const &);
		~SuperMutant(void);
		// Operators
		SuperMutant & operator=(SuperMutant const &);
		// Methods
		void takeDamage(int);
};

#endif

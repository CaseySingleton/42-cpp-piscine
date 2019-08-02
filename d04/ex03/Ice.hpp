/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:21:03 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:21:04 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &);
		~Ice(void);
		// Operators
		Ice & operator=(Ice const &);
		// Methods
		AMateria * clone() const;
		void use(ICharacter &);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:21:15 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:21:16 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &);
		~Cure(void);
		// Operators
		Cure & operator=(Cure const &);
		// Methods
		AMateria * clone() const;
		void use(ICharacter &);
};

#endif

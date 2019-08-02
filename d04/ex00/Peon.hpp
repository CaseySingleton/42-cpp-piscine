/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:18:04 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 15:18:05 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	protected:
		Peon(void);

	public:
		Peon(std::string const &);
		Peon(Peon const &);
		~Peon(void);
		// Operators
		Peon & operator=(Peon const &);
		// Methods
		void getPolymorphed(void) const;
};

#endif

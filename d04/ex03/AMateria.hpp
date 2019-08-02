/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:20:51 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:20:52 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		std::string _type;
		unsigned int _xp;

	public:
		AMateria(void);
		AMateria(AMateria const &);
		~AMateria(void);
		// Operators
		AMateria & operator=(AMateria const &);
		// Methods
		virtual AMateria * clone() const = 0;
		virtual void use(ICharacter &);
		// Setters
		void setType(std::string const &);
		void setXP(unsigned int);
		// Getters
		std::string const & getType(void) const;
		unsigned int getXP(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:22:28 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:22:30 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		IMateriaSource(void) {}
		virtual ~IMateriaSource(void) {}
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria * createMateria(std::string const &) = 0;
};

#endif

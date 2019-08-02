/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:21:41 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:21:42 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

struct Materias
{
	AMateria * materia;
	struct Materias * next;
};

class MateriaSource : public IMateriaSource
{
	private:
		unsigned int _inventorySize;
		unsigned int _count;
		struct Materias * _materias;
		void _copyMaterias(MateriaSource const &);

	public:
		MateriaSource(void);
		MateriaSource(std::string const &);
		MateriaSource(MateriaSource const &);
		~MateriaSource(void);
		// Operators
		MateriaSource & operator=(MateriaSource const &);
		// Methods
		void learnMateria(AMateria *);
		AMateria * createMateria(std::string const &);
		// Setters
		void setInventorySize(unsigned int);
		void setCount(unsigned int);
		// Getters
		unsigned int getInventorySize(void) const;
		unsigned int getCount(void) const;
		AMateria * getMateria(unsigned int) const;
};

#endif

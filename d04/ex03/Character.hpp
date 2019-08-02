/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:21:29 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/04 12:21:31 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"


struct Character : public ICharacter
{
	private:
		struct Materias
		{
			AMateria * materia;
			struct Materias * next;
		};
		std::string _name;
		unsigned int _inventorySize;
		unsigned int _count;
		struct Materias * _materias;

	public:
		Character(void);
		Character(std::string const &);
		Character(Character const &);
		~Character(void);
		// Operators
		Character & operator=(Character const &);
		// Methods
		void equip(AMateria *);
		void unequip(unsigned int position);
		void use(unsigned int, ICharacter &);
		// Setters
		void setName(std::string const &);
		void setCount(unsigned int);
		void setInventorySize(unsigned int);
		// Getters
		std::string const & getName(void) const;
		AMateria * getMateria(unsigned int) const;
		unsigned int getCount(void) const;
		unsigned int getInventorySize(void) const;
};

#endif

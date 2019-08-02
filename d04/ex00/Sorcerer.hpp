/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:17:41 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 15:17:42 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;
	
	protected:
		Sorcerer(void);

	public:
		Sorcerer(std::string const &, std::string const &);
		Sorcerer(Sorcerer const &);
		~Sorcerer(void);
		// Operators
		Sorcerer & operator=(Sorcerer const &);
		// Methods
		void polymorph(Victim const &) const;
		// Setters
		void setName(std::string const &);
		void setTitle(std::string const &);
		// Getters
		std::string getName(void) const;
		std::string getTitle(void) const;
};

std::ostream & operator<<(std::ostream &, const Sorcerer &);

#endif

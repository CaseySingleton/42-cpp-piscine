/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:17:54 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 15:17:55 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	private:
		std::string _name;

	protected:
		Victim(void);

	public:
		Victim(std::string const &);
		Victim(Victim const &);
		~Victim(void);
		// Operators
		Victim & operator=(Victim const &);
		// Methods
		void getPolymorphed(void) const;
		// Setters
		void setName(std::string const &);
		// Getters
		std::string getName(void) const;
};

std::ostream & operator<<(std::ostream &, const Victim &);

#endif

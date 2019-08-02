/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:40:36 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 16:40:37 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	private:
		int _numberOfLegs;
		bool _hasAHorn;
		std::string _name;

	public:
		Pony(void);
		Pony(int);
		Pony(std::string, int);
		~Pony(void);
		void namePony(std::string);
		void evolve(void);
		void makeSound(void) const;
};

#endif

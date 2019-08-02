/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:12:05 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 17:12:06 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string _name;
		std::string _type;

	public:
		Zombie(void);
		Zombie(std::string);
		Zombie(std::string, std::string);
		~Zombie(void);
		void announce(void);
};

#endif

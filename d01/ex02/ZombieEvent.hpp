/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:12:16 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 17:12:17 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <time.h>
# include <stdlib.h>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string _type;

	public:
		ZombieEvent(void);
		ZombieEvent(std::string);
		~ZombieEvent(void);
		// Methods
		Zombie* newZombie(std::string name);
		Zombie* randomChump(void);
		// Setters
		void setZombieType(std::string);
};

#endif

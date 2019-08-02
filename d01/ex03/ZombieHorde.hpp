/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 19:50:07 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 19:50:08 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <time.h>
# include <stdlib.h>
# include "Zombie.hpp"

class ZombieHorde
{
    private:
		int _n;
		Zombie* _zombies;

    public:
        ZombieHorde(int);
        ~ZombieHorde(void);
        // Methods
        void announce(void);

};

#endif

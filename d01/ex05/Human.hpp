/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:42:52 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 20:42:53 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class Human
{
	private:
		const Brain _brain;

	public:
		Human(void);
		~Human(void);
		// Methods
		std::string identify(void) const;
		// Getters
		const Brain getBrain(void) const;
};

#endif

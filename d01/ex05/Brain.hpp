/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:42:44 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 20:42:44 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <sstream>
# include <string>
# include <iostream>

class Brain
{
	private:
		std::string _brainAddress;

	public:
		Brain(void);
		~Brain(void);

		std::string identify(void) const;

		// Setters
		void setBrainAddress(void);

		// Getters
		std::string getBrainAddress(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:29:02 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:29:02 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:

	protected:

	public:
		PowerFist(void);
		PowerFist(std::string const &, int, int);
		PowerFist(PowerFist const &);
		~PowerFist(void);
		// Operators
		PowerFist & operator=(PowerFist const &);
		// Methods
		void attack(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:27:48 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:27:49 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:

	protected:

	public:
		PlasmaRifle(void);
		PlasmaRifle(std::string const &, int, int);
		PlasmaRifle(PlasmaRifle const &);
		~PlasmaRifle(void);
		// Operators
		PlasmaRifle & operator=(PlasmaRifle const &);
		// Methods
		void attack(void) const;
};

#endif

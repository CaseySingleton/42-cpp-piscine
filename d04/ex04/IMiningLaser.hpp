/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:04:30 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:04:30 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMINIGLASER_HPP
# define IMINIGLASER_HPP

class IAsteroid;

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}
		virtual void mine(IAsteroid *) = 0;
};

#endif

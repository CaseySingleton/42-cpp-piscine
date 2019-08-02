/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:04:16 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:04:18 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <string>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined(DeepCoreMiner *) const = 0;
		virtual std::string beMined(StripMiner *) const = 0;
		virtual std::string getName(void) const = 0;
};

#endif

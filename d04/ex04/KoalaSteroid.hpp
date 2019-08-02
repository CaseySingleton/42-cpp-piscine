/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:03:35 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:03:36 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KOLALASTEROID_HPP
# define KOLALASTEROID_HPP

# include "IAsteroid.hpp"

class KoalaSteroid : public IAsteroid
{
	private:
		std::string _name;

	public:
		KoalaSteroid(void);
		KoalaSteroid(KoalaSteroid const &);
		~KoalaSteroid(void);
		// Opperators
		KoalaSteroid & operator=(KoalaSteroid const &);
		// Methods
		std::string beMined(DeepCoreMiner *) const;
		std::string beMined(StripMiner *) const;
		// Setters
		void setName(std::string const &);
		// Getters
		std::string getName(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:03:21 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:03:22 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

# include "IAsteroid.hpp"

class AsteroKreog : public IAsteroid
{
	private:
		std::string _name;

	public:
		AsteroKreog(void);
		AsteroKreog(AsteroKreog const &);
		~AsteroKreog(void);
		// Opperators
		AsteroKreog & operator=(AsteroKreog const &);
		// Methods
		using IAsteroid::beMined;
		std::string beMined(DeepCoreMiner *) const;
		std::string beMined(StripMiner *) const;
		// Setters
		void setName(std::string const &);
		// Getters
		std::string getName(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:29:12 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/03 19:29:13 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	private:
		std::string _type;
		int _health;
		int _maxHealth;
		int _damageRedutcion;

	protected:
		Enemy(void);

	public:
		Enemy(int, int, std::string const &);
		Enemy(Enemy const &);
		~Enemy(void);
		// Operators
		Enemy & operator=(Enemy const &);
		// Methods
		virtual void takeDamage(int) = 0;
		// Setters
		void setType(std::string const &);
		void setHealth(int);
		void setMaxHealth(int);
		void setDamageReduction(int);
		// Getters
		std::string getType(void) const;
		int getHealth(void) const;
		int getMaxHealth(void) const;
		int getDamageReduction(void) const;
};

std::ostream & operator<<(std::ostream &, const Enemy &);

#endif

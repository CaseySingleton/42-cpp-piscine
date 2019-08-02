/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:23:18 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 21:23:18 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "You swing at " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "You shoot at " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "You shout at " << target << std::endl;
}

void Human::action(std::string const & actionName, std::string const & target)
{
	std::string attackNames[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	void (Human::*memberFunctions[]) (std::string const &) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 0; i < 3; i++)
	{
		if (attackNames[i] == actionName)
		{
			(this->*memberFunctions[i])(target);
			break ;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:26:56 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/23 10:26:57 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern::~Intern(void)
{
	return ;
}

// Operators
Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

// Methods
Form * Intern::makeForm(std::string requestedForm, std::string target)
{
	if (requestedForm == "robotomy request")
	{
		std::cout << "Filling out a form for: " << requestedForm << std::endl;
		return (new RobotomyRequestForm(target));
	}
	if (requestedForm == "shrubbery request")
	{
		std::cout << "Filling out a form for: " << requestedForm << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	if (requestedForm == "presidential pardon request")
	{
		std::cout << "Filling out a form for: " << requestedForm << std::endl;
		return (new PresidentialPardonForm(target));
	}
	std::cout << "Error: \'" << requestedForm << "\' for " << target << ": not found" << std::endl;
	return (nullptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:26:34 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/23 10:26:35 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// robotomy request
// shrubbery request
// presidential pardon request

int				main(void)
{
	Intern		bighead;
	Bureaucrat	gavin("Gavin Nelson", 3);
	Form		*papers;

	papers = bighead.makeForm("robotomy request", "Erlich Bachman");
	gavin.signForm(*papers);
	gavin.executeForm(*papers);
	papers = bighead.makeForm("shrubbery request", "Hooli");
	gavin.signForm(*papers);
	gavin.executeForm(*papers);
	papers = bighead.makeForm("presidential pardon request", gavin.getName());
	gavin.signForm(*papers);
	gavin.executeForm(*papers);
	papers = bighead.makeForm("vacation request", "Bighead");
	return (0);
}

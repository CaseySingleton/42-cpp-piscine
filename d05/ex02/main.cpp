/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:50:05 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/22 17:50:05 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int				main(void)
{
	Bureaucrat *terry = new Bureaucrat("Terry", 5);
	ShrubberyCreationForm *bushForm = new ShrubberyCreationForm("123_ABC_St.");
	RobotomyRequestForm *roboForm = new RobotomyRequestForm("Arnold");
	PresidentialPardonForm *pardonForm = new PresidentialPardonForm("Ford");
	terry->signForm(*bushForm);
	terry->executeForm(*bushForm);
	terry->signForm(*roboForm);
	terry->executeForm(*roboForm);
	terry->executeForm(*pardonForm);
	terry->signForm(*pardonForm);
	terry->executeForm(*pardonForm);
	return (0);
}

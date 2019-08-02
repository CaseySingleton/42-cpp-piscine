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

#include "OfficeBlock.hpp"

// robotomy request
// shrubbery request
// presidential pardon request

void			theThing(OfficeBlock & office, std::string form, std::string target)
{
	try
	{
		office.doBureaucracy(form, target);
	}
	catch (OfficeBlock::NoInternException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoSignerException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoExecutionerException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int				main(void)
{
	OfficeBlock	office;

	Intern		bighead;
	Bureaucrat	erlich("Erlich Bachman", 69);
	Bureaucrat	gavin("Gavin Nelson", 22);

	office.setSigner(erlich);
	office.setIntern(bighead);
	theThing(office, "robotomy request", "Richard Hendricks");
	office.setExecutioner(gavin);
	theThing(office, "robotomy request", "Gilfoyle");
	theThing(office, "shrubbery request", "Hooli");
	theThing(office, "presidential pardon request", gavin.getName());
	theThing(office, "vacation request", "BigHead");
	return (0);
}

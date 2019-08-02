/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:52:44 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/22 16:52:44 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int				main(void)
{
	Bureaucrat * fry = new Bureaucrat("Fry", 150);
	Bureaucrat * hermes = new Bureaucrat("hermes", 1);
	// Form * paper = new Form("Important Documents", 151);
	// Form * paper = new Form("Important Documents", 0);
	Form * paper = new Form("Important Documents", 23);

	hermes->signForm(*paper);
	fry->signForm(*paper);
	return (0);
}

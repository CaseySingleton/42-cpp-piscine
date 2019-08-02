/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 15:38:48 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/08 15:38:48 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int			main(void)
{
	Bureaucrat hermes("Hermes Conrad", 1);
	Bureaucrat fry("Phillip J. Fry", 150);
	Bureaucrat zoidberg("Dr. John A. Zoidberg", 122);

	std::cout << hermes;
	std::cout << fry;
	std::cout << zoidberg;

	fry.setGrade(151);
	return (0);
}

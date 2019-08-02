/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:49:03 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/22 17:49:03 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137), _target(target)
{
	std::cout << "Created: " << getName() << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return (*this);
}

// Methods
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (isSigned())
	{
		if (executor.getGrade() <= getRequiredGradeToExecute())
		{
			std::cout << "Plainting a shrubbery at " << _target << std::endl;
			std::ofstream outfile(_target + "_shrubbery");
			outfile << "       |" << std::endl;
			outfile << "    \\|/|/" << std::endl;
			outfile << "  \\|\\|//|/" << std::endl;
			outfile << "   \\|\\|/|/" << std::endl;
			outfile << "     \\|//" << std::endl;
			outfile << "     \\|/" << std::endl;
			outfile << "     \\|/" << std::endl;
			outfile << "      |" << std::endl;
			outfile << "_\\|/__|_\\|/____\\|/_" << std::endl;
		}
		else
		{
			std::cout << "Executor does not meet the requirements to execute: " << getName() << std::endl;
			throw Form::GradeTooLowException();
		}
	}
	else
	{
		std::cout << "The Form: " << getName() << " must be signed before execution" << std::endl;
	}
}

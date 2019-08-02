/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:49:33 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/22 17:49:33 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5), _target(target)
{
	std::cout << "Created: " << getName() << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return (*this);
}

// Methods
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (isSigned())
	{
		if (executor.getGrade() <= getRequiredGradeToExecute())
		{
			std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
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

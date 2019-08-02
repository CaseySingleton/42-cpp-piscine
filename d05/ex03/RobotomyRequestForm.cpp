/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:49:22 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/22 17:49:22 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	srand(time(0));
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45), _target(target)
{
	srand(time(0));
	std::cout << "Created: " << getName() << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return (*this);
}

// Methods
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (isSigned())
	{
		if (executor.getGrade() <= getRequiredGradeToExecute())
		{
			if ((rand() % 2) == 0)
				std::cout << "* drilling noises * " << _target << " has been robotomized." << std::endl;
			else
				std::cout << "* screaming noises * Failed to robotomize " << _target << std::endl;
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


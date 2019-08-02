/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:25:14 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/20 22:25:14 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Unnamed Form"), _requiredGrade(150)
{
	return ;
}

Form::Form(std::string name, int requiredGrade) : _name(name), _requiredGrade(requiredGrade)
{
	if (requiredGrade < 1)
		throw Form::GradeTooHighException();
	else if (requiredGrade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form(void)
{
	return ;
}

// Operators
Form & Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form Name: " << rhs.getName() << ", Required grade for signature: " << rhs.getRequiredGrade() << std::endl;

	return (o);
}

// Methods
void Form::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > getRequiredGrade())
	{
		std::cout << "Error: Bureaucrat: " << bureaucrat.getName() << " does not meet requirements to sign: " << getName() << std::endl;
		throw Form::GradeTooHighException();
	}
	else
	{
		std::cout << "Bureaucrat " << bureaucrat.getName();
		if (_isSigned == true)
			std::cout << " re-signed the form: " << getName() << std::endl;
		else
			std::cout << " signed the form: " << getName() << std::endl;
		_isSigned = true;
	}
}

// Getters
std::string Form::getName(void) const
{
	return (_name);
}

int Form::getRequiredGrade(void) const
{
	return (_requiredGrade);
}

// GradeTooHigh Exception Class
Form::GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
	return ;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {}

// Operators
Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return (*this);
}

// Methods
const char * Form::GradeTooHighException::what() const throw()
{
	return ("Error: Form grade too high");
}

// GradeTooLow Exception Class
Form::GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
	return ;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {}

// Operators
Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return (*this);
}

// Methods
const char * Form::GradeTooLowException::what() const throw()
{
	return ("Error: Form grade too low");
}


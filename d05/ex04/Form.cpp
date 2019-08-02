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

Form::Form(void) : _name("Empty Form"), _requiredGradeToSign(150), _requiredGradeToExecute(150)
{
	return ;
}

Form::Form(std::string name, int requiredGradeToSign, int requiredGradeToExecute) : _name(name), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExecute(requiredGradeToExecute)
{
	if (requiredGradeToSign < 1 || requiredGradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (requiredGradeToSign > 150 || requiredGradeToExecute > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & src) : _name(src.getName()), _requiredGradeToSign(src.getRequiredGradeToSign()), _requiredGradeToExecute(src.getRequiredGradeToExecute())
{
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
	o << "Form Name: " << rhs.getName() << std::endl;
	o << "Required grade for signature: " << rhs.getRequiredGradeToSign() << std::endl;
	o << "Required grade for execution: " << rhs.getRequiredGradeToExecute() << std::endl;

	return (o);
}

// Methods
void Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > getRequiredGradeToSign())
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

int Form::getRequiredGradeToSign(void) const
{
	return (_requiredGradeToSign);
}

int Form::getRequiredGradeToExecute(void) const
{
	return (_requiredGradeToExecute);
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

bool Form::isSigned(void) const
{
	return (_isSigned);
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


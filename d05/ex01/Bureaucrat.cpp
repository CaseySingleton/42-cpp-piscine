/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 15:38:42 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/08 15:38:43 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		setGrade(grade);
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

// Operators
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		setGrade(rhs.getGrade());
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << "Name: " << rhs.getName() << ", Grade: " << rhs.getGrade() << std::endl;

	return (o);
}

// Methods
void Bureaucrat::signForm(Form & form)
{
	form.beSigned(*this);
}

// Setters
void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	return ;
}

// Getters
const std::string & Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

// GradeTooHigh Exception Class
Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
	return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

// Operators
Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return (*this);
}

// Methods
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Bureaucrat grade value too high");
}

// GradeTooLow Exception Class
Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
	return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

// Operators
Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return (*this);
}

// Methods
const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Bureaucrat grade value too low");
}

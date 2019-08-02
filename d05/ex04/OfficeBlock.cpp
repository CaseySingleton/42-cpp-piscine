/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:52:08 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/23 19:52:09 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) : _intern(nullptr), _signer(nullptr), _executioner(nullptr)
{
	return ;
}

OfficeBlock::OfficeBlock(Intern & intern, Bureaucrat & signer, Bureaucrat & executioner)
{
	setIntern(intern);
	setSigner(signer);
	setExecutioner(executioner);
}

OfficeBlock::OfficeBlock(OfficeBlock const & src)
{
	setIntern(src.getIntern());
	setSigner(src.getSigner());
	setExecutioner(src.getExecutioner());
}

OfficeBlock::~OfficeBlock(void)
{
	return ;
}

// Operators
OfficeBlock & OfficeBlock::operator=(OfficeBlock const & rhs)
{
	if (this != &rhs)
	{
		setIntern(rhs.getIntern());
		setSigner(rhs.getSigner());
		setExecutioner(rhs.getExecutioner());
	}
	return (*this);
}

// Methods
void OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	Form * papers;

	if (_intern == nullptr)
		throw OfficeBlock::NoInternException();
	if (_signer == nullptr)
		throw OfficeBlock::NoSignerException();
	if (_executioner == nullptr)
		throw OfficeBlock::NoExecutionerException();

	papers = _intern->makeForm(form, target);
	if (papers != nullptr)
	{
		try
		{
			_signer->signForm(*papers);
			std::cout << _signer->getName() << " signed " << form << "targeted at " << target << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException & e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			_executioner->executeForm(*papers);
			std::cout << _executioner->getName() << " executed the form \'" << form << "\' targeted at " << target << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException & e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return ;
}

// Setters
void OfficeBlock::setIntern(Intern & intern)
{
	_intern = &intern;
	return ;
}

void OfficeBlock::setSigner(Bureaucrat & signer)
{
	_signer = &signer;
	return ;
}

void OfficeBlock::setExecutioner(Bureaucrat & executioner)
{
	_executioner = &executioner;
	return ;
}

// Getters
Intern & OfficeBlock::getIntern(void) const
{
	return (*_intern);
}

Bureaucrat & OfficeBlock::getSigner(void) const
{
	return (*_signer);
}

Bureaucrat & OfficeBlock::getExecutioner(void) const
{
	return (*_executioner);
}

// Exception Classes

// NoInternException
OfficeBlock::NoInternException::NoInternException(void)
{
	return ;
}

OfficeBlock::NoInternException::NoInternException(NoInternException const & src)
{
	*this = src;
	return ;
}

OfficeBlock::NoInternException::~NoInternException(void) throw()
{
	return ;
}

// Operators
OfficeBlock::NoInternException & OfficeBlock::NoInternException::operator=(OfficeBlock::NoInternException const & rhs)
{
	(void)rhs;
	return (*this);
}

const char * OfficeBlock::NoInternException::what(void) const throw()
{
	return ("Error: Can not perform Bureaucracy without an Intern");
}

// NoSignerException
OfficeBlock::NoSignerException::NoSignerException(void)
{
	return ;
}

OfficeBlock::NoSignerException::NoSignerException(NoSignerException const & src)
{
	*this = src;
	return ;
}

OfficeBlock::NoSignerException::~NoSignerException(void) throw()
{
	return ;
}

// Operators
OfficeBlock::NoSignerException & OfficeBlock::NoSignerException::operator=(OfficeBlock::NoSignerException const & rhs)
{
	(void)rhs;
	return (*this);
}

const char * OfficeBlock::NoSignerException::what(void) const throw()
{
	return ("Error: Can not perform Bureaucracy without a Signer");
}

// NoExecutionerException
OfficeBlock::NoExecutionerException::NoExecutionerException(void)
{
	return ;
}

OfficeBlock::NoExecutionerException::NoExecutionerException(NoExecutionerException const & src)
{
	*this = src;
	return ;
}

OfficeBlock::NoExecutionerException::~NoExecutionerException(void) throw()
{
	return ;
}

// Operators
OfficeBlock::NoExecutionerException & OfficeBlock::NoExecutionerException::operator=(OfficeBlock::NoExecutionerException const & rhs)
{
	(void)rhs;
	return (*this);
}

const char * OfficeBlock::NoExecutionerException::what(void) const throw()
{
	return ("Error: Can not perform Bureaucracy without an Executioner");
}

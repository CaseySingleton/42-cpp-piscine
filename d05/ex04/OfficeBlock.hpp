/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:52:14 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/23 19:52:15 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "Bureaucrat.hpp"
# include "Intern.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class OfficeBlock
{
	private:
		Intern * _intern;
		Bureaucrat * _signer;
		Bureaucrat * _executioner;

	public:
		OfficeBlock(void);
		OfficeBlock(Intern &, Bureaucrat &, Bureaucrat &);
		OfficeBlock(OfficeBlock const &);
		~OfficeBlock(void);
		// Operators
		OfficeBlock & operator=(OfficeBlock const &);
		// Methods
		void doBureaucracy(std::string, std::string);
		// Setters
		void setIntern(Intern &);
		void setSigner(Bureaucrat &);
		void setExecutioner(Bureaucrat &);
		// Getters
		Intern & getIntern(void) const;
		Bureaucrat & getSigner(void) const;
		Bureaucrat & getExecutioner(void) const;

		class NoInternException
		{
			public:
				NoInternException(void);
				NoInternException(NoInternException const &);
				~NoInternException(void) throw();
				// Operators
				NoInternException & operator=(NoInternException const &);
				// Methods
				const char * what(void) const throw();
		};

		class NoSignerException
		{
			public:
				NoSignerException(void);
				NoSignerException(NoSignerException const &);
				~NoSignerException(void) throw();
				// Operators
				NoSignerException & operator=(NoSignerException const &);
				// Methods
				const char * what(void) const throw();
		};

		class NoExecutionerException
		{
			public:
				NoExecutionerException(void);
				NoExecutionerException(NoExecutionerException const &);
				~NoExecutionerException(void) throw();
				// Operators
				NoExecutionerException & operator=(NoExecutionerException const &);
				// Methods
				const char * what(void) const throw();
		};
};

#endif

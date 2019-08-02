/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:25:18 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/20 22:25:19 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		Form(void);
		const std::string _name;
		const int _requiredGrade;
		bool _isSigned;

	public:
		Form(std::string, int);
		Form(Form const &);
		~Form(void);
		// Operators
		Form & operator=(Form const &);
		// Methods
		void beSigned(Bureaucrat &);
		// Getters
		std::string getName(void) const;
		int getRequiredGrade(void) const;

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const &);
				~GradeTooHighException(void) throw();
				// Operators
				GradeTooHighException & operator=(GradeTooHighException const &);
				// Methods
				virtual const char * what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const &);
				~GradeTooLowException(void) throw();
				// Operators
				GradeTooLowException & operator=(GradeTooLowException const &);
				// Methods
				virtual const char * what(void) const throw();
		};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const &);

#endif

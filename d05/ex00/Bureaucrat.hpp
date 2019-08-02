/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 15:38:38 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/08 15:38:39 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		unsigned int _grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const &, unsigned int);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat(void);
		// Operators
		Bureaucrat & operator=(Bureaucrat const &);
		// Methods
		// Setters
		void setGrade(unsigned int);
		// Getters
		const std::string & getName(void) const;
		unsigned int getGrade(void) const;

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:49:06 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/22 17:49:06 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		const std::string _target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string);
		~ShrubberyCreationForm(void);
		// Operators
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &);
		// Methods
		void execute(Bureaucrat const &) const;
};

#endif

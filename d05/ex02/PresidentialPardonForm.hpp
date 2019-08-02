/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:49:37 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/22 17:49:38 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		const std::string _target;

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string);
		~PresidentialPardonForm(void);
		// Operators
		PresidentialPardonForm & operator=(const PresidentialPardonForm &);
		// Methods
		void execute(Bureaucrat const &) const;
};

#endif

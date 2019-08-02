/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:49:24 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/22 17:49:25 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		const std::string _target;

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string);
		~RobotomyRequestForm(void);
		// Operators
		RobotomyRequestForm & operator=(const RobotomyRequestForm &);
		// Methods
		void execute(Bureaucrat const &) const;
};

#endif

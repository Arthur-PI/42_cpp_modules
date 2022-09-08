/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:57:41 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/08 19:25:30 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

# include <iostream>
# include <stdlib.h>
# include "Form.h"

class	RobotomyRequestForm: public Form
{
	public:
		// Constructors
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm& robotomyrequestform);
		RobotomyRequestForm(std::string target);

		// Destructor
		~RobotomyRequestForm(void);

		// Operators
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& robotomyrequestform);

		// Getters and Setters
		std::string	getTarget(void) const;

		// Member functions
		void	execute(const Bureaucrat& executor);

	private:
		std::string	_target;

};

#endif

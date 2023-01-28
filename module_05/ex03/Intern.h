/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:38:43 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:55:38 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include "AForm.h"
# include "ShrubberyCreationForm.h"
# include "RobotomyRequestForm.h"
# include "PresidentialPardonForm.h"

class	Intern
{
	public:
		// Constructors
		Intern(void);
		Intern(const Intern& intern);

		// Destructor
		~Intern(void);

		// Operators
		Intern&	operator=(const Intern& intern);

		// Getters and Setters

		// Member functions
		AForm*	makeForm(const std::string formName, const std::string targetName) const;

	private:

};

#endif

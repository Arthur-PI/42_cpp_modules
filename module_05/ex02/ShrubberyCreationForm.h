/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:54:12 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/08 18:43:22 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H

# include <iostream>
# include <fstream>
# include "Form.h"

class	ShrubberyCreationForm: public Form
{
	public:
		// Constructors
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm& shrubberycreationform);
		ShrubberyCreationForm(std::string target);

		// Destructor
		~ShrubberyCreationForm(void);

		// Operators
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& shrubberycreationform);

		// Getters and Setters
		std::string	getTarget(void) const;

		// Member functions
		void	execute(const Bureaucrat& executor);

	private:
		std::string	_target;

};

#endif

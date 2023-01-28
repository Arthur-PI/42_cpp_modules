/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:54:12 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:10:02 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H

# include <iostream>
# include <fstream>
# include "AForm.h"

class	ShrubberyCreationForm: public AForm
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
		void	execute(const Bureaucrat& executor) const;

	private:
		std::string	_target;

};

#endif

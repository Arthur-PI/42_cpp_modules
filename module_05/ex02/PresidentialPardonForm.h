/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:33:39 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:10:39 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

# include <iostream>
# include <stdlib.h>
# include "AForm.h"

class	PresidentialPardonForm: public AForm
{
	public:
		// Constructors
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm& presidentialpardonform);
		PresidentialPardonForm(std::string target);

		// Destructor
		~PresidentialPardonForm(void);

		// Operators
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& presidentialpardonform);

		// Getters and Setters
		std::string	getTarget(void) const;
		
		// Member functions
		void	execute(const Bureaucrat& executor) const;

	private:
		std::string	_target;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:09:33 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:58:02 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int	main(void)
{
	{
		Intern	intern;
		AForm*	form;

		form = intern.makeForm("shrubbery creation", "Bender");
		if (form)
			delete form;
	}
	{
		Intern	intern;
		AForm*	form;

		form = intern.makeForm("robotomy request", "Bender");
		if (form)
			delete form;
	}
	{
		Intern	intern;
		AForm*	form;

		form = intern.makeForm("presidential pardon", "Bender");
		if (form)
			delete form;
	}
	{
		Intern	intern;
		AForm*	form;

		form = intern.makeForm("some random form", "Bender");
		if (form)
			delete form;
	}
	return (0);
}

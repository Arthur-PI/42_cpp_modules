/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:42:30 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:58:14 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"

Intern::Intern(void) {}

Intern::Intern(const Intern& intern) { (void)intern; }

Intern::~Intern(void) {}

Intern&	Intern::operator=(const Intern& intern) { (void)intern; return *this;}

AForm*	Intern::makeForm(const std::string formName, const std::string targetName) const
{
	int		i;
	AForm*	form;
	std::string	classes[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	i = 0;
	while (i < 3) {
		if (formName == classes[i])
			break;
		i++;
	}
	switch (i) {
		case 0:
			form = new ShrubberyCreationForm(targetName);
			break;
		case 1:
			form = new RobotomyRequestForm(targetName);
			break;
		case 2:
			form = new PresidentialPardonForm(targetName);
			break;
		default:
			form = NULL;
			std::cout << "This type of form does not exist !" << std::endl;
	}
	if (form)
		std::cout << "Intern creates " << form->getName() << std::endl;
	return (form);
}

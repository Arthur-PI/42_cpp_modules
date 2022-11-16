/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:36:57 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:10:49 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(void):
	Form::Form("presidential pardon", 25, 5)
{
	_target = "nobody";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidentialpardonform):
	Form::Form(presidentialpardonform)
{
	_target = presidentialpardonform.getTarget();
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form::Form("presidential pardon", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& presidentialpardonform)
{
	Form::operator=(presidentialpardonform);
	_target = presidentialpardonform.getTarget();
	return *this;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return _target;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:57:49 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/08 19:26:06 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(void):
	Form::Form("roboto request", 72, 45)
{
	_target = "nobody";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robotomyrequestform):
	Form::Form(robotomyrequestform)
{
	_target = robotomyrequestform.getTarget();
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form::Form("shrubbery creation", 145, 137)
{
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& robotomyrequestform)
{
	Form::operator=(robotomyrequestform);
	_target = robotomyrequestform.getTarget();
	return *this;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return _target;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor)
{
	Form::execute(executor);
	std::cout << "*** drilling noises ***" << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized\n";
	else
		std::cout << "The robotomy failed\n";
}

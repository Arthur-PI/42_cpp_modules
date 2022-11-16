/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:57:49 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:26:01 by apigeon          ###   ########.fr       */
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
	Form::Form("roboto request", 72, 45)
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

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	srand(time(NULL));
	std::cout << "*** drilling noises ***" << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized\n";
	else
		std::cout << "The robotomy failed\n";
}

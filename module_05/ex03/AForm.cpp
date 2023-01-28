/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:17:28 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:09:14 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"

AForm::AForm(void):
	_sign_grade(LOWEST_GRADE),
	_exec_grade(LOWEST_GRADE),
	_name("Default Name")
{
	_signed = false;
}

AForm::AForm(const AForm& form):
	_sign_grade(form.getSignGrade()),
	_exec_grade(form.getExecGrade()),
	_name(form.getName())
{
	_signed = form.getSigned();
}

AForm::AForm(std::string name, int sign_grade, int exec_grade):
	_sign_grade(sign_grade),
	_exec_grade(exec_grade),
	_name(name)
{
	_signed = false;
	if (_sign_grade > LOWEST_GRADE || _exec_grade > LOWEST_GRADE)
		throw GradeTooLowException();
	else if (_sign_grade < HIGHEST_GRADE || _exec_grade < HIGHEST_GRADE)
		throw GradeTooHighException();
}

AForm::~AForm(void)
{

}

AForm&	AForm::operator=(const AForm& form)
{
	_signed = form.getSigned();
	return *this;
}

std::ostream&	operator<<(std::ostream& stream, const AForm& form)
{
	stream << "The form " << form.getName() << ": sign grade of " << form.getSignGrade() << ", exec grade of " << form.getExecGrade() << " is ";
	if (!form.getSigned())
		stream << "not ";
	stream << "signed";
	return stream;
}

bool	AForm::getSigned(void) const
{
	return _signed;
}

int	AForm::getSignGrade(void) const
{
	return _sign_grade;
}

int	AForm::getExecGrade(void) const
{
	return _exec_grade;
}

const std::string	AForm::getName(void) const
{
	return _name;
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _sign_grade)
		throw GradeTooLowException();
	_signed = true;
}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (!_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > _exec_grade)
		throw GradeTooLowException();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:17:28 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/08 18:16:31 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

Form::Form(void):
	_sign_grade(LOWEST_GRADE),
	_exec_grade(LOWEST_GRADE),
	_name("Default Name")
{
	_signed = false;
}

Form::Form(const Form& form):
	_sign_grade(form.getSignGrade()),
	_exec_grade(form.getExecGrade()),
	_name(form.getName())
{
	_signed = form.getSigned();
}

Form::Form(std::string name, int sign_grade, int exec_grade):
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

Form::~Form(void)
{

}

Form&	Form::operator=(const Form& form)
{
	_signed = form.getSigned();
	return *this;
}

std::ostream&	operator<<(std::ostream& stream, const Form& form)
{
	stream << "The form " << form.getName() << ": sign grade of " << form.getSignGrade() << ", exec grade of " << form.getExecGrade() << " is ";
	if (!form.getSigned())
		stream << "not ";
	stream << "signed";
	return stream;
}

bool	Form::getSigned(void) const
{
	return _signed;
}

int	Form::getSignGrade(void) const
{
	return _sign_grade;
}

int	Form::getExecGrade(void) const
{
	return _exec_grade;
}

const std::string	Form::getName(void) const
{
	return _name;
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _sign_grade)
		throw GradeTooLowException();
	_signed = true;
}

void	Form::execute(const Bureaucrat& executor)
{
	if (!_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > _exec_grade)
		throw GradeTooLowException();
}

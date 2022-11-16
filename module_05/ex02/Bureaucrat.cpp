/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:03:22 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:15:18 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(void): _name("Default name")
{
	_grade = LOWEST_GRADE;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat): _name(bureaucrat.getName())
{
	_grade = bureaucrat.getGrade();
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	_grade = bureaucrat.getGrade();
	return *this;
}

std::ostream&	operator<<(std::ostream& stream, const Bureaucrat& bureaucrat)
{
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return stream;
}

const std::string	Bureaucrat::getName(void) const
{
	return _name;
}

int	Bureaucrat::getGrade(void) const
{
	return _grade;
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade > LOWEST_GRADE)
		throw GradeTooLowException();
	else if (grade < HIGHEST_GRADE)
		throw GradeTooHighException();
	_grade = grade;
}

void	Bureaucrat::incrementGrade(void)
{
	if (_grade == HIGHEST_GRADE)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (_grade == LOWEST_GRADE)
		throw GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(Form& form)
{
	try {
		form.beSigned(*this);
		std::cout << _name << " signed the form " << form.getName() << std::endl;
	} catch (Form::GradeTooLowException& e) {
		std::cout << _name << " couldn't sign the form " << form.getName() << ", grade too low" << std::endl;
	} catch (Form::GradeTooHighException& e) {
		std::cout << _name << " couldn't sign the form " << form.getName() << ", grade too high" << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form& form) const
{
	try {
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	} catch (Form::GradeTooLowException& e) {
		std::cout << _name << " couldn't execute the form " << form.getName() << ", grade too low" << std::endl;
	} catch (Form::GradeTooHighException& e) {
		std::cout << _name << " couldn't execute the form " << form.getName() << ", grade too high" << std::endl;
	} catch (Form::FormNotSignedException& e) {
		std::cout << _name << " couldn't execute the form " << form.getName() << ", form not signed" << std::endl;
	}
}

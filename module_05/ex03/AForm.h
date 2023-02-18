/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:13:32 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:09:24 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <iostream>
# include "Bureaucrat.h"

class	Bureaucrat;

class	AForm
{
	public:
		// Constructor
		AForm(void);
		AForm(const AForm& form);
		AForm(std::string name, int sign_grade, int exec_grade);

		// Destructor
		virtual ~AForm() = 0;

		// Operator
		virtual AForm&	operator=(const AForm& form);

		// Getters
		virtual bool				getSigned(void) const;
		virtual int					getSignGrade(void) const;
		virtual int					getExecGrade(void) const;
		virtual const std::string	getName(void) const;

		// Exceptions
		struct GradeTooHighException: public std::runtime_error {
			GradeTooHighException(void): std::runtime_error("error grade too high") {}
		};

		struct GradeTooLowException: public std::runtime_error {
			GradeTooLowException(void): std::runtime_error("error grade too low") {}
		};

		struct FormNotSignedException: public std::runtime_error {
			FormNotSignedException(void): std::runtime_error("error the form is not signed") {}
		};

		// Member functions
		virtual void	beSigned(const Bureaucrat& bureaucrat);
		virtual void	execute(const Bureaucrat& executor) const;

	protected:
		bool				_signed;
		const int			_sign_grade;
		const int			_exec_grade;
		const std::string	_name;
};

std::ostream&	operator<<(std::ostream& stream, const AForm& form);

#endif

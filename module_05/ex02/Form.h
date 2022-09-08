/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:13:32 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/08 19:23:34 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.h"

class	Bureaucrat;

class	Form
{
	public:
		// Constructor
		Form(void);
		Form(const Form& form);
		Form(std::string name, int sign_grade, int exec_grade);

		// Destructor
		virtual ~Form();

		// Operator
		virtual Form&	operator=(const Form& form);

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
		virtual void	execute(const Bureaucrat& executor);

	protected:
		bool				_signed;
		const int			_sign_grade;
		const int			_exec_grade;
		const std::string	_name;

};

std::ostream&	operator<<(std::ostream& stream, const Form& form);

#endif

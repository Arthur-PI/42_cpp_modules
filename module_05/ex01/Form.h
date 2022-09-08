/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:13:32 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/08 15:40:04 by apigeon          ###   ########.fr       */
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
		~Form();

		// Operator
		Form&	operator=(const Form& form);

		// Getters
		bool				getSigned(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		const std::string	getName(void) const;

		// Exceptions
		struct GradeTooHighException: public std::runtime_error {
			GradeTooHighException(void): std::runtime_error("error grade too high") {}
		};

		struct GradeTooLowException: public std::runtime_error {
			GradeTooLowException(void): std::runtime_error("error grade too low") {}
		};

		// Member functions
		void	beSigned(const Bureaucrat& bureaucrat);

	private:
		bool				_signed;
		const int			_sign_grade;
		const int			_exec_grade;
		const std::string	_name;

};

std::ostream&	operator<<(std::ostream& stream, const Form& form);

#endif

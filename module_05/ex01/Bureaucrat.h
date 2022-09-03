/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:59:55 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/03 12:07:17 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class	Bureaucrat
{
	public:
		// Constructors
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& bureaucrat);
		
		// Destructor
		~Bureaucrat(void);

		// Operator
		Bureaucrat&	operator=(const Bureaucrat& bureaucrat);
		
		// Getters
		int					getGrade(void) const;
		const std::string	getName(void) const;

		// Exceptions
		struct GradeTooHighException: public std::runtime_error {
			GradeTooHighException(void): std::runtime_error("error grade too high") {}
		};

		struct GradeTooLowException: public std::runtime_error {
			GradeTooLowException(void): std::runtime_error("error grade too low") {}
		};

		// Member functions
		void	incrementGrade(void);
		void	decrementGrade(void);

	private:
		int					_grade;
		const std::string	_name;

		static const int	LOWEST_GRADE = 150;
		static const int	HIGHEST_GRADE = 1;
};

std::ostream&	operator<<(std::ostream& stream, const Bureaucrat& bureaucrat);

#endif

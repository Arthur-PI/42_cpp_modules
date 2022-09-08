/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:09:33 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/08 15:52:32 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int	main(void)
{
	{
		std::cout << "Test the form constuctors:\n";
		Form	form1;
		Form	form2("validate budget", 1, 1);
		Form	form3(form2);

		form1 = form3;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;

		try {
			Form	form4("fire CEO", 0, 1);
			std::cout << "This text should not appear !\n";
		} catch (Form::GradeTooHighException& e) {
			std::cout << "Grade too high exception thrown !\n";
		}
		try {
			Form	form5("fire CEO", 1, 151);
			std::cout << "This text should not appear !\n";
		} catch (Form::GradeTooLowException& e) {
			std::cout << "Grade too low exception thrown !\n";
		}
	}
	{
		std::cout << "\nTest the form sign function:\n";
		Form	form("law contract", 10, 1);
		Bureaucrat	b1("Victor", 9);
		Bureaucrat	b2("Nathan", 11);

		b2.signForm(form);
		b1.signForm(form);
	}
	return (0);

}

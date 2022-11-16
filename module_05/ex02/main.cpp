/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:09:33 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:30:22 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int	main(void)
{
	{
		std::cout << "Test case Shrubbery Creation form, all working:" << std::endl;
		ShrubberyCreationForm	form("home");
		Bureaucrat				b("Granny", 100);

		b.signForm(form);
		b.executeForm(form);
		std::cout << std::endl;
	}
	{
		std::cout << "Test case Roboto Request form, all working:" << std::endl;
		RobotomyRequestForm	form("Theo");
		Bureaucrat			b("R2D2", 45);

		b.signForm(form);
		b.executeForm(form);
		std::cout << std::endl;
	}
	{
		std::cout << "Test case Presidential Pardon form, all working:" << std::endl;
		PresidentialPardonForm form("Victor");
		Bureaucrat	b("Arthur", 5);

		b.signForm(form);
		b.executeForm(form);
		std::cout << std::endl;
	}
	{
		std::cout << "Test case permission to sign but not to execute" << std::endl;
		PresidentialPardonForm form("Maro");
		Bureaucrat	b("Nathan", 15);

		b.signForm(form);
		b.executeForm(form);
		std::cout << std::endl;
	}
	{
		std::cout << "Test case no enough permissions at all" << std::endl;
		PresidentialPardonForm form("Paul");
		Bureaucrat	b("Nassim", 30);

		b.signForm(form);
		b.executeForm(form);
	}

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:09:33 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/03 12:10:29 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int	main(void)
{
	{
		std::cout << "Test constuctors, increment, decrement and << operator:\n";
		Bureaucrat	b1 = Bureaucrat("Arthur", 1);
		std::cout << b1 << std::endl;
		b1.decrementGrade();
		b1.decrementGrade();
		Bureaucrat	b2 = b1;
		b1.decrementGrade();
		b2.incrementGrade();
		Bureaucrat	b3(b1);
		b3.incrementGrade();
		std::cout << b1 << std::endl;
		std::cout << Bureaucrat() << std::endl;
		std::cout << "(Clone 1): " << b2 << std::endl;
		std::cout << "(Clone 2): "<< b3 << std::endl;
	}
	{
		std::cout << "\nTest errors on constructors and increment, decrement:\n";
		try {
			Bureaucrat b1("Arthur", 0);
			std::cout << "This text should not appear !\n";
		} catch (Bureaucrat::GradeTooHighException& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			Bureaucrat b1("Arthur", 151);
			std::cout << "This text should not appear !\n";
		} catch (Bureaucrat::GradeTooLowException& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			Bureaucrat b1("Arthur", 1);
			std::cout << "This text should appear !\n";
			b1.incrementGrade();
			std::cout << "This text should not appear !\n";
		} catch (Bureaucrat::GradeTooHighException& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			Bureaucrat b1("Arthur", 150);
			std::cout << "This text should appear !\n";
			b1.decrementGrade();
			std::cout << "This text should not appear !\n";
		} catch (Bureaucrat::GradeTooLowException& e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:09:33 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/08 19:25:40 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int	main(void)
{
	RobotomyRequestForm form("Victor");
	Bureaucrat	b("Arthur", 30);

	b.signForm(form);
	form.execute(b);

	return (0);
}

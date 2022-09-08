/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:55:31 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/08 19:22:13 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(void):
	Form::Form("shrubbery creation", 145, 137)
{
	_target = "nobody";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubberycreationform):
	Form::Form(shrubberycreationform)
{
	_target = shrubberycreationform.getTarget();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form::Form("shrubbery creation", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubberycreationform)
{
	Form::operator=(shrubberycreationform);
	_target = shrubberycreationform.getTarget();
	return *this;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return _target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor)
{
	std::ofstream	file;

	Form::execute(executor);
	file.open((_target + "_shrubbery").c_str(), std::ofstream::out);
	if (!file) {
		std::cout << "Unable to open the output file\n";
		return ;
	}
	file << "               ,@@@@@@@," << std::endl;
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	file << "       |o|        | |         | |" << std::endl;
	file << "       |.|        | |         | |" << std::endl;
	file << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
}

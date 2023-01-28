/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:55:31 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 14:10:04 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(void):
	AForm::AForm("shrubbery creation", 145, 137)
{
	_target = "nobody";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubberycreationform):
	AForm::AForm(shrubberycreationform)
{
	_target = shrubberycreationform.getTarget();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	AForm::AForm("shrubbery creation", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubberycreationform)
{
	AForm::operator=(shrubberycreationform);
	_target = shrubberycreationform.getTarget();
	return *this;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return _target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::ofstream	file;

	AForm::execute(executor);
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
	file.close();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:52:37 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 17:25:55 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"debug", "info", "warning", "error"};
	funcPTR	functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i=0; i < 4; i++) {
		if (levels[i] == level)
			(this->*functions[i])();
	}
}

void	Harl::debug(void)
{
	std::cout << BLUE << "[DEBUG]" << RESET << ": message\n";
}

void	Harl::info(void)
{
	std::cout << GREEN << "[INFO]" << RESET << ": message\n";
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "[WARNING]" << RESET << ": message\n";
}

void	Harl::error(void)
{
	std::cout << RED << "[ERROR]" << RESET << ": message\n";
}

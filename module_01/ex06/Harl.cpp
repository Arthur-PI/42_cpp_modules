/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:52:37 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/15 12:53:21 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void	Harl::complain(std::string level)
{
	int	i;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4) {
		if (levels[i] == level)
			break;
		i++;
	}
	switch(i) {
		case 0:
			debug();
			/* FALLTHROUGH */
		case 1:
			info();
			/* FALLTHROUGH */
		case 2:
			warning();
			/* FALLTHROUGH */
		case 3:
			error();
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems]\n";
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

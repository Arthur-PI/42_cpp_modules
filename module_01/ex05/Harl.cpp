/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:52:37 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 17:03:36 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void	Harl::complain(std::string level)
{
	(void)level;
	// TODO
}

void	debug(void)
{
	std::cout << BLUE << "[DEBUG]" << RESET << ": message\n";
}

void	info(void)
{
	std::cout << GREEN << "[INFO]" << RESET << ": message\n";
}

void	warning(void)
{
	std::cout << YELLOW << "[WARNING]" << RESET << ": message\n";
}

void	error(void)
{
	std::cout << RED << "[ERROR]" << RESET << ": message\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:17:08 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/19 12:35:10 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.h"

int	main(void)
{
	std::string	line;

	std::cin >> line;
	if (line == "ADD") {
		// TODO
	}
	else if (line == "SEARCH") {
		// TODO
	}
	else if (line == "EXIT") {
		// TODO
	}
	else
		std::cout << "Invalid command, here is the available ones: ADD/SEARCH/EXIT" << std::endl;
}

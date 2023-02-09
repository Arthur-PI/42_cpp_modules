/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:17:08 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/22 13:36:24 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.h"
#include "color.h"

int	main(void)
{
	bool		over;
	std::string	line;
	PhoneBook	phonebook;

	over = false;
	phonebook = PhoneBook();
	do {
		std::cout << BLUE << "PhoneBook> " << CYAN;
		if (!std::getline(std::cin, line))
			return (1);
		std::cout << RESET;
		if (line == "ADD")
			phonebook.add_contact();
		else if (line == "SEARCH")
			phonebook.search();
		else if (line == "EXIT") {
			std::cout << PURPLE << "Sorry to see you leave ;(\n" << RESET;
			over = true;
		}
		else
			std::cout << RED << "Invalid command, here is the available ones: ADD/SEARCH/EXIT\n\n" << RESET;
	} while (!over);
}

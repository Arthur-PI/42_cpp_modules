/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:17:08 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/19 14:54:45 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.h"

int	main(void)
{
	bool		over;
	std::string	line;
	PhoneBook	phonebook;

	over = false;
	phonebook = PhoneBook();
	do {
		std::cout << "PhoneBook > ";
		std::getline(std::cin, line);
		if (line == "ADD")
			phonebook.add_contact();
		else if (line == "SEARCH")
			phonebook.search();
		else if (line == "EXIT") {
			std::cout << "Sorry to see you leave ;(\n";
			over = true;
		}
		else
			std::cout << "Invalid command, here is the available ones: ADD/SEARCH/EXIT\n\n";
	} while (!over);
}

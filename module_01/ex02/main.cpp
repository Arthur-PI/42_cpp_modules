/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:52:22 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 14:14:22 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string;
	std::string	*stringPTR;
	std::string	&stringREF = string;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;
	std::cout << "Memory address of the string: " << &string << "\n";
	std::cout << "Memory address held by stringPTR: " << stringPTR << "\n";
	std::cout << "Memory address held by stringREF: " << &stringREF << "\n";
	std::cout << "Value of string: " << string << "\n";
	std::cout << "Value pointed by stringPTR: " << *stringPTR << "\n";
	std::cout << "Value pointed by stringREF: " << stringREF << "\n";
	return 0;
}

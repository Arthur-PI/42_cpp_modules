/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:21:43 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/18 23:10:29 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.h"

int	main(void)
{
	std::vector<int>	vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);
	vec.push_back(8);
	vec.push_back(9);
	std::cout << "List:\n";
	for (unsigned int i=0; i < vec.size(); i++)
		std::cout << vec[i] << "\n";

	std::cout << "Find 5 in list: " << *::easyfind(vec, 5) << std::endl;
	try {
		std::cout << "Find 11 in list: " << *::easyfind(vec, 11) << std::endl;
	} catch (std::exception& e) {
		std::cout << "\nError could not find the element\n";
	}
	return 0;
}

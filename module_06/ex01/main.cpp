/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:28:01 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/17 17:55:09 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.h"

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	Data		*data;
	Data		*data2;
	uintptr_t	raw;

	data = new Data("Arthur");
	std::cout << "Data* = " << data << "\n";
	raw = serialize(data);
	std::cout << "uintptr_t = " << raw << "\n";
	data2 =  deserialize(raw);
	std::cout << "Deserialize Data* = " << data << "\n";
	if (data == data2)
		std::cout << "Equal\n";
	else
		std::cout << "Not equal\n";
	return 0;
}

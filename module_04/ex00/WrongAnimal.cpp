/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:46:46 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 10:35:45 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor\n";
	_type = "Default Wrong Animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	std::cout << "WrongAnimal copy constructor\n";
	_type = animal.getType();
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& animal)
{
	std::cout << "WrongAnimal copy assignment operator\n";
	_type = animal.getType();
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return _type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "wrong animal sound" << std::endl;
}

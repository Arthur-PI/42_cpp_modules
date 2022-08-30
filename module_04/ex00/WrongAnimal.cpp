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
	_type = "Default Animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	_type = animal.getType();
}

WrongAnimal::~WrongAnimal(void)
{
	// TODO
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& animal)
{
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

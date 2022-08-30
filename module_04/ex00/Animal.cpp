/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:46:46 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 10:05:38 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal(void)
{
	_type = "Default Animal";
}

Animal::Animal(const Animal& animal)
{
	_type = animal.getType();
}

Animal::~Animal(void)
{
	// TODO
}

Animal&	Animal::operator=(const Animal& animal)
{
	_type = animal.getType();
	return *this;
}

std::string	Animal::getType(void) const
{
	return _type;
}

void	Animal::makeSound(void) const
{
	std::cout << "animal sound" << std::endl;
}

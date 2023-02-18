/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:46:46 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 12:32:20 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called\n";
	_type = "Default Animal";
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal clone constructor called\n";
	_type = animal._type;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}

Animal&	Animal::operator=(const Animal& animal)
{
	std::cout << "Animal copy assignment operator called\n";
	_type = animal._type;
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

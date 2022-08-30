/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:55:56 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 16:09:15 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called\n";
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& dog)
{
	std::cout << "Dog clone constructor called\n";
	*this = dog;
}

Dog&	Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignment operator called\n";
	_type = dog.getType();
	_brain = new Brain(*(dog.getBrain()));
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called\n";
	delete _brain;
}

Brain*	Dog::getBrain(void) const
{
	return _brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "wouf wouf" << std::endl;
}

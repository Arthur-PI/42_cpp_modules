/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:58:37 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 13:54:28 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called\n";
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat& cat)
{
	std::cout << "Cat clone constructor called\n";
	*this = cat;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";
	delete _brain;
}

Cat&	Cat::operator=(const Cat& cat)
{
	std::cout << "Cat copy assignment operator called\n";
	_type = cat._type;
	_brain = new Brain(*cat._brain);
	return *this;
}

Brain*	Cat::getBrain(void) const
{
	return _brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "miaouw" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:55:56 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 10:05:44 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog(void)
{
	std::cout << "Dog default constructor\n";
	_type = "Dog";
}

void	Dog::makeSound(void) const
{
	std::cout << "wouf wouf" << std::endl;
}

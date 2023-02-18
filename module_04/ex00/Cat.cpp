/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:58:37 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 10:05:48 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat(void)
{
	std::cout << "Cat default constructor\n";
	_type = "Cat";
}

void	Cat::makeSound(void) const
{
	std::cout << "miaouw" << std::endl;
}

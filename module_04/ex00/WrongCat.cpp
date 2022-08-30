/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:58:37 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 10:36:31 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

WrongCat::WrongCat(void)
{
	_type = "Cat";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "miaouw" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:25:39 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 14:44:12 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(void)
{
	_type = "Fists";
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon(void)
{
	// TODO
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

std::string	Weapon::getType(void) const
{
	return _type;
}

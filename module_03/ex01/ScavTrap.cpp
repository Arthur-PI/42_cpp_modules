/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:43:08 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/25 10:56:39 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called\n";
	_name = "John Doe";
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called\n";
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
	std::cout >> "ScavTrap clone contructor called\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scavtrap)
{
	std::cout << "ScavTrap copy assignment operator called\n";
}

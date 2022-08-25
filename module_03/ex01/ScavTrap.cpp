/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:43:08 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/25 12:10:53 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << "ScavTrap default constructor called\n";
	_name = "John Doe";
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor called\n";
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap): ClapTrap(scavtrap)
{
	std::cout << "ScavTrap clone contructor called\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scavtrap)
{
	ClapTrap::operator=(scavtrap);
	std::cout << "ScavTrap copy assignment operator called\n";
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy == 0)
		std::cout << "ScavTrap " << _name << " cannot attack because it does not have enough energy !\n";
	else {
		_energy--;
		std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attack << " points of damage\n";
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:13:38 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/29 15:59:27 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(void): ScavTrap("John Doe_clap_name"), FragTrap("John Doe_clap_name") 
{
	std::cout << "DiamondTrap default constructor called\n";
	_name = "John Doe";
	_health = 100;
	_energy = 50;
	_attack = 30;
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap constructor called\n";
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap): ClapTrap(diamondtrap)
{
	std::cout << "DiamondTrap clone constructor called\n";
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& diamondtrap)
{
	std::cout << "DiamondTrap copy assignment operator called\n";
	ClapTrap::operator=(diamondtrap);
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called\n";
}

/*
void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
*/

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << _name << " aka " << FragTrap::_name << std::endl;
}

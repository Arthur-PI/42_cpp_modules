/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:22:22 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/25 12:32:03 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "FragTrap default contructor called\n";
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap contructor called\n";
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(const FragTrap& fragtrap): ClapTrap(fragtrap)
{
	std::cout << "FragTrap clone contructor called\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called\n";
}

FragTrap&	FragTrap::operator=(const FragTrap& fragtrap)
{
	ClapTrap::operator=(fragtrap);
	std::cout << "FragTrap copy assignment operator called\n";
	return *this;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap let's do a high five guys !\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:13:12 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/25 14:21:05 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "FragTrap.h"

int	main(void)
{
	ClapTrap	ct1("Arthur");
	ClapTrap	ct2("Victor");
	ClapTrap	ct3("Thomas");
	ScavTrap	st1("Téo");
	ScavTrap	st2(st1);
	FragTrap	ft1("Norman");

	ct1.attack("Victor");
	ct2.takeDamage(ct1.getAttack());
	ct1.attack("Thomas");
	ct3.takeDamage(ct1.getAttack());
	ct3.attack("Victor");
	ct2.takeDamage(ct3.getAttack());
	ct2.beRepaired(10);
	st1.guardGate();
	st2.guardGate();
	ft1.attack("Arthur");
	ct1.takeDamage(ft1.getAttack());
	return 0;
}

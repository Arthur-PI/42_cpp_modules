/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:13:12 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/25 10:27:22 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int	main(void)
{
	ClapTrap	ct1("Arthur");
	ClapTrap	ct2("Victor");
	ClapTrap	ct3("Thomas");

	ct1.attack("Victor");
	ct2.takeDamage(ct1.getAttack());
	ct1.attack("Thomas");
	ct3.takeDamage(ct1.getAttack());
	ct3.attack("Victor");
	ct2.takeDamage(ct3.getAttack());
	ct2.beRepaired(10);
	return 0;
}

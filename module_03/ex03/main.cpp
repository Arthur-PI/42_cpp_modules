/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:13:12 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/29 16:14:54 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

int	main(void)
{
	DiamondTrap	dt1("Arthur");
	DiamondTrap	dt2(dt1);
	DiamondTrap	dt3;

	dt3 = dt2;
	dt1.whoAmI();
	dt1.attack("Victor");
	return 0;
}

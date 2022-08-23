/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:27:08 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 12:29:43 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie *z1 = newZombie("Zombie1");
	randomChump("Zombie2");
	randomChump("Zombie3");
	Zombie *z4 = newZombie("Zombie4");
	Zombie *z5 = newZombie("Zombie5");
	Zombie *z6 = newZombie("Zombie6");

	delete z1;
	delete z4;
	delete z5;
	delete z6;
	return 0;
}

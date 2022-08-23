/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:27:08 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 13:19:53 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	int		N;
	Zombie	*zombies;

	N = 7;
	zombies = zombieHorde(N, "John");
	for (int i=0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:56:51 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 13:20:16 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombies;

	zombies = new Zombie[N]();
	for (int i=0; i < N; i++)
		zombies[i].setName(name);
	return (zombies);
}

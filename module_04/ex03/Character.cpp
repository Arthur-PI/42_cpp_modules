/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:02:41 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 20:23:05 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

Character::Character(void)
{
	_name = "noone";
	for (int i=0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name)
{
	_name = name;
	for (int i=0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character& character)
{
	*this = character;
}

Character&	Character::operator=(const Character& character)
{
	_name = character.getName();
	return *this;
}

Character::~Character(void) {}

void	Character::equip(AMateria* m)
{
	for (int i=0; i < 4; i++) {
		if (inventory[i] == NULL) {
			inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != NULL) {
		inventory[idx]->use(target);
	}
}

const std::string&	Character::getName() const
{
	return _name;
}

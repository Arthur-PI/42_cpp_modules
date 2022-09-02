/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:02:41 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/02 18:11:18 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

Character::Character(void)
{
	_name = "noone";
	for (int i=0; i < NB_ITEMS; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	_name = name;
	for (int i=0; i < NB_ITEMS; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& character)
{
	*this = character;
}

Character&	Character::operator=(const Character& character)
{
	int	i;

	_name = character.getName();
	i = 0;
	while (i < NB_ITEMS && character.getItem(i) != NULL) {
		//if (_inventory[i] != NULL)
		//	delete _inventory[i];
		_inventory[i] = character.getItem(i)->clone();
		i++;
	}
	while  (i < NB_ITEMS) {
		_inventory[i] = NULL;
		i++;
	}
	return *this;
}

Character::~Character(void)
{
	for (int i=0; i < NB_ITEMS; i++) {
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

void	Character::equip(AMateria* m)
{
	for (int i=0; i < NB_ITEMS; i++) {
		if (_inventory[i] == NULL) {
			_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < NB_ITEMS)
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < NB_ITEMS && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}

const std::string&	Character::getName() const
{
	return _name;
}

AMateria*	Character::getItem(int idx) const
{
	if (idx < 0 || idx >= NB_ITEMS)
		return NULL;
	return _inventory[idx];
}

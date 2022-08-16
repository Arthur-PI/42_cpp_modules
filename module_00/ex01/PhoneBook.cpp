/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:20:36 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/16 11:52:28 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	_nb_contact = 0;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::add_contact(Contact new_contact)
{
	if (_nb_contact == MAX_CONTACT)
	{
		for (int i=1; i < _nb_contact; i++)
			_contacts[i - 1] = _contacts[i];
		_contacts[_nb_contact - 1] = new_contact;
	}
	else
		_contacts[_nb_contact++] = new_contact;
}

void	add_contact()
{
	// TODO
}

void	search(std::string name)
{
	(void)name;
	// TODO
}

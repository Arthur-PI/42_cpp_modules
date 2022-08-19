/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:07:05 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/19 14:13:07 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <iostream>
#include "Contact.h"

# define MAX_CONTACT 8

class PhoneBook
{
	private:
		int		_nb_contact;
		Contact	_contacts[MAX_CONTACT];

	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact();
		void	add_contact(Contact new_contact);
		void	search();
		void	display_contacts();
};

#endif

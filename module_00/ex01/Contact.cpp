/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:15:48 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/19 12:35:21 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

Contact::Contact()
{
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_phone_number = "";
	_secret = "";
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string secret)
{
	_first_name = fn;
	_last_name = ln;
	_nickname = nn;
	_phone_number = pn;
	_secret = secret;
}

void	Contact::display_infos(void)
{
	std::cout << "\t\t" << "Contact Informations" << std::endl;
	std::cout << "First name\t: " << _first_name << std::endl;
	std::cout << "Last name\t: " << _last_name << std::endl;
	std::cout << "Nickname\t: " << _nickname << std::endl;
	std::cout << "Phone number\t: " << _phone_number << std::endl;
	std::cout << "Darkest secret\t: " << _secret << std::endl;
}

Contact::~Contact() {}

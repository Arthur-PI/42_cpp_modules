/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:15:48 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/22 14:44:33 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"
#include "color.h"

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
	std::cout << "Contact Informations" << std::endl;
	std::cout << BLUE << "First name\t: " << CYAN << _first_name << std::endl;
	std::cout << BLUE << "Last name\t: " << CYAN << _last_name << std::endl;
	std::cout << BLUE << "Nickname\t: " << CYAN << _nickname << std::endl;
	std::cout << BLUE << "Phone number\t: " << CYAN << _phone_number << std::endl;
	std::cout << BLUE << "Darkest secret\t: " << CYAN << _secret << "\n\n";
}

std::string	Contact::getFirstName()
{
	return _first_name;
}

std::string	Contact::getLastName()
{
	return _last_name;
}

std::string	Contact::getNickname()
{
	return _nickname;
}

Contact::~Contact() {}

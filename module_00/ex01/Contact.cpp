/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:15:48 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/16 11:58:32 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

Contact::Contact()
{
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_secret = "";
	_phone_number = "";
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string secret, std::string pn)
{
	_first_name = fn;
	_last_name = ln;
	_nickname = nn;
	_secret = secret;
	_phone_number = pn;
}

Contact::~Contact() {}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:10:08 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/16 11:55:17 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_secret;
		std::string _phone_number;

	public:
		Contact();
		Contact(std::string fn, std::string ln, std::string nn, std::string secret, std::string pn);
		~Contact();
};

#endif

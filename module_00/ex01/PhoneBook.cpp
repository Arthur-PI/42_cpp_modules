/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:20:36 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/19 15:59:59 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook(void)
{
	_nb_contact = 0;
}

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

bool	is_valid_name(std::string name)
{
	for (int i=0; name[i]; i++)
		if (name[i] != '-' && name[i] != ' ' && !isalpha(name[i]))
			return (false);
	return (true);
}

bool	is_valid_number(std::string number)
{
	  for (int i=0; number[i]; i++)
		  if (!isdigit(number[i]))
			  return (false);
	  return (true);
}

bool	is_empty(std::string s)
{
	for (int i=0; s[i]; i++)
		if (!isspace(s[i]))
			return (false);
	return (true);
}

std::string	read_prompt(std::string prompt, bool (*validator)(std::string))
{
	std::string answer;

	while (true) {
		std::cout << prompt;
		std::getline(std::cin, answer);
		if (is_empty(answer))
			std::cout << "Your input cannot be an empty string.\n";
		else if (validator && !validator(answer))
			std::cout << "Error msg TODO.\n";
		else
			break;
	}
	return (answer);
}

void	PhoneBook::add_contact(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;

	std::cout << "\t\t New Contact Creation\n";
	first_name = read_prompt("First Name: ", &is_valid_name);
	last_name = read_prompt("Last name: ", &is_valid_name);
	nickname = read_prompt("Nickname: ", &is_valid_name);
	phone_number = read_prompt("Phone number: ", &is_valid_number);
	secret = read_prompt("Darkest secret: ", NULL);
	this->add_contact(Contact(first_name, last_name, nickname, phone_number, secret));
	std::cout << "Contact successfully added\n\n";
}

std::string	align_word(std::string word, int len)
{
	int			i;
	int			w_len;
	std::string	aligned;

	w_len = word.length();
	i = 0;
	while (i + w_len < len) {
		aligned += ' ';
		i++;
	}
	aligned += word;
	aligned = aligned.substr(0, len);
	if (w_len > len)
		aligned[len - 1] = '.';
	return aligned;
}

void	one_line_format(std::string a, std::string b, std::string c, std::string d)
{
	std::cout << "|" << align_word(a, 10);
	std::cout << "|" << align_word(b, 10);
	std::cout << "|" << align_word(c, 10);
	std::cout << "|" << align_word(d, 10) << "|\n";
}

void	PhoneBook::display_contacts(void)
{
	int			id;
	std::string	input;

	std::cout << "---------------------------------------------\n";
	one_line_format("Index", "First name", "Last name", "Nickname");
	std::cout << "---------------------------------------------\n";
	for (int i=0; i < _nb_contact; i++) {
		one_line_format(std::to_string(i + 1), _contacts[i].getFirstName(), _contacts[i].getLastName(), _contacts[i].getNickname());
		std::cout << "---------------------------------------------\n";
	}
	std::cout << "Please enter the id of the contact you want to see: ";
	std::getline(std::cin, input);
	id = 0;
	if (input.length() == 1)
		id = input[0] - '0';
	if (!isdigit(input[0]) || id < 1 || id > _nb_contact)
		std::cout << "Error: this is not a valid contact id\n";
	else
		_contacts[id - 1].display_infos();
	
}

void	PhoneBook::search(void)
{
	this->display_contacts();	
}

PhoneBook::~PhoneBook(void) {}

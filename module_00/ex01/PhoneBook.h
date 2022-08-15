/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:07:05 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/15 12:15:36 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# define MAX_CONTACT 8

class PhoneBook {
	private:
		Contact	contacts[MAX_CONTACT];

	public:
		PhoneBook();
		PhoneBook(const PhoneBook &pb);
		~PhoneBook();
		PhoneBook & operator;


};

#endif

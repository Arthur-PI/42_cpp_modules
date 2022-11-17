/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:32:34 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/17 17:41:04 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

Data::Data(void)
{
	_name = "";
}

Data::Data(const Data& data)
{
	_name = data.getName();
}

Data::Data(std::string name)
{
	_name = name;
}

Data::~Data(void) {}

Data&	Data::operator=(const Data& data)
{
	_name = data.getName();
	return *this;
}

std::string	Data::getName(void) const
{
	return _name;
}

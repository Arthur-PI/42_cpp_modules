/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:06:46 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 18:36:17 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int Fixed::fractional_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	_value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called\n";
	_value = fixed.getRawBits();
}

Fixed & Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called\n";
	_value = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "Member function getRawBits called\n";
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Member function setRawBits called\n";
	_value = raw;
}

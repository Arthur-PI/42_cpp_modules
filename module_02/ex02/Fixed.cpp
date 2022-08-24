/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:06:46 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/24 19:25:07 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void)
{
	_bits = 0;
}

Fixed::Fixed(const int value)
{
	_bits = value << _fractional_bits;
}

Fixed::Fixed(const float value)
{
	_bits = roundf(value * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed& fixed)
{
	_bits = fixed.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	_bits = fixed.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return stream;
}

// Operator redefinition
Fixed	Fixed::operator+(const Fixed& fixed)
{
	Fixed result;

	result.setRawBits(_bits + fixed.getRawBits());
	return result;
}

Fixed	Fixed::operator-(const Fixed& fixed)
{
	Fixed result;

	result.setRawBits(_bits - fixed.getRawBits());
	return result;
}

Fixed	Fixed::operator*(const Fixed& fixed)
{
	Fixed result;

	// TODO need fix
	result.setRawBits((_bits * fixed.getRawBits()) >> _fractional_bits);
	return result;
}

Fixed	Fixed::operator/(const Fixed& fixed)
{
	Fixed result;

	// TODO need fix
	result.setRawBits((_bits << _fractional_bits) / fixed.getRawBits());
	return result;
}

bool	Fixed::operator>(const Fixed& fixed) const
{
	return _bits > fixed.getRawBits();
}

bool	Fixed::operator<(const Fixed& fixed) const
{
	return _bits < fixed.getRawBits();
}

bool	Fixed::operator>=(const Fixed& fixed) const
{
	return _bits >= fixed.getRawBits();
}

bool	Fixed::operator<=(const Fixed& fixed) const
{
	return _bits <= fixed.getRawBits();
}

bool	Fixed::operator==(const Fixed& fixed) const
{
	return _bits == fixed.getRawBits();
}

bool	Fixed::operator!=(const Fixed& fixed) const
{
	return _bits != fixed.getRawBits();
}

Fixed&	Fixed::operator++(void)
{
	_bits += 1 << _fractional_bits;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	next(*this);

	_bits += 1 << _fractional_bits;
	return next;
}

Fixed&	Fixed::operator--(void)
{
	_bits -= 1 << _fractional_bits;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	next(*this);

	_bits -= 1 << _fractional_bits;
	return next;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	return _bits;
}

void	Fixed::setRawBits(int const raw)
{
	_bits = raw;
}

int	Fixed::toInt(void) const
{
	return _bits >> _fractional_bits;
}

float	Fixed::toFloat(void) const
{
	return (float)_bits / (float)(1 << _fractional_bits);
}

// Static member functions
Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

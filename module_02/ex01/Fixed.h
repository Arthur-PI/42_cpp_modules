/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:57:52 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 18:40:33 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const Fixed &fixed);
		~Fixed(void);
		Fixed & operator=(const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int	_value;
		static const int	fractional_bits = 8;
};

#endif

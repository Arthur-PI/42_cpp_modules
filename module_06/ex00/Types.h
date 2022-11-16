/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:04:54 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 22:30:59 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include <iostream>
# include <string>
# include <limits>
# include <cstdlib>

enum e_type
{
	TYPE_NOTHING,
	TYPE_NAN,
	TYPE_INT,
	TYPE_FLOAT,
	TYPE_DOUBLE,
	TYPE_INF_MINUS,
	TYPE_INF_PLUS
};

class	Types
{
	public:
		// Constructors
		Types(void);
		Types(const Types& types);
		Types(std::string value);

		// Destructor
		~Types(void);

		// Operators
		Types&	operator=(const Types& types);

		// Getters and Setters
		char	getCharValue(void) const;
		int		getIntValue(void) const;
		float	getFloatValue(void) const;
		double	getDoubleValue(void) const;
		int		getType(void) const;

		// Member functions

	private:
		char	_char_value;
		int		_int_value;
		float	_float_value;
		double	_double_value;
		int		_type;

};

std::ostream&	operator<<(std::ostream& stream, const Types &types);

#endif

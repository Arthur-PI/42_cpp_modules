/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:30:59 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/17 17:34:00 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

# include <iostream>
# include <string>

class	Data
{
	public:
		// Constructors
		Data(void);
		Data(const Data& data);
		Data(std::string name);

		// Destructor
		~Data(void);

		// Operators
		Data&	operator=(const Data& data);

		// Getters and Setters
		std::string	getName(void) const;

		// Member functions

	private:
		std::string	_name;

};

#endif

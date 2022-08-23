/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:23:08 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 14:43:46 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		void		setType(std::string type);
		std::string getType(void) const;

	private:
		std::string	_type;
};

#endif

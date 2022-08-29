/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:34:02 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/29 16:21:29 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include <iostream>
# include "ClapTrap.h"

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap& scavtrap);
		~ScavTrap(void);
		ScavTrap&	operator=(const ScavTrap& scavtrap);

		ScavTrap(std::string name);

		void	guardGate(void);
		void	attack(const std::string& target);
};

#endif

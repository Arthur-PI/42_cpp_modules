/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:23:22 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/29 15:58:47 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

# include <iostream>
# include "ScavTrap.h"
# include "FragTrap.h"

class	DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap& diamondtrap);
		~DiamondTrap(void);
		DiamondTrap&	operator=(const DiamondTrap& diamontrap);

		DiamondTrap(std::string name);

		using	ScavTrap::attack;
		void	whoAmI(void);

	private:
		std::string	_name;
};

#endif

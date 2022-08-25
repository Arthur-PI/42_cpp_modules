/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:41:40 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/25 10:42:32 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap&	operator=(const ClapTrap& claptrap);
		~ClapTrap(void);
		ClapTrap(std::string name);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		int			getHealth(void) const;
		int			getEnergy(void) const;
		int			getAttack(void) const;
		std::string	getName(void) const;

	protected:
		int			_health;
		int			_energy;
		int			_attack;
		std::string	_name;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:41:40 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/15 14:35:01 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

# include <iostream>
# include <climits>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap&	operator=(const ClapTrap& claptrap);
		~ClapTrap(void);

		ClapTrap(std::string name);

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		unsigned int	getHealth(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getAttack(void) const;
		std::string		getName(void) const;

	protected:
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_attack;
};

#endif

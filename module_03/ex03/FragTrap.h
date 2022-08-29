/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:16:05 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/29 15:55:55 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

# include <iostream>
# include "ClapTrap.h"

class	FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap& fragtrap);
		~FragTrap(void);
		FragTrap&	operator=(const FragTrap& fragtrap);

		FragTrap(const std::string name);

		void	highFivesGuys(void) const;
};

#endif

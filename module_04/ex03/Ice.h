/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:22:51 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 18:43:30 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include <iostream>
# include "AMateria.h"

class	Ice: public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& ice);
		~Ice(void);
		Ice&	operator=(const Ice& ice);

		void		use(ICharacter& target);
		AMateria*	clone(void) const;
};

#endif

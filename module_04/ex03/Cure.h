/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:54:45 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 19:56:05 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_H
# define CURE_H

# include <iostream>
# include "AMateria.h"

class	Cure: public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& cure);
		~Cure(void);
		Cure&	operator=(const Cure& cure);

		void		use(ICharacter& target);
		AMateria*	clone(void) const;
};

#endif

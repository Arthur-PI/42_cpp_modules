/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:39:09 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 19:45:43 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

# include <string>
# include "AMateria.h"

class AMateria;

class	ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void 				use(int idx, ICharacter& target) = 0;
		virtual const std::string&	getName() const = 0;
};

#endif

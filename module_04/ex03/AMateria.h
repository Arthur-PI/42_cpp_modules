/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:56:27 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 20:26:38 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharacter.h"

class ICharacter;

class	AMateria
{
	public:
		AMateria(void);
		AMateria(const AMateria& materia);
		AMateria(const std::string& type);

		AMateria&	operator=(const AMateria& materia);
		
		virtual ~AMateria(void) {};

		const std::string&	getType(void) const;

		virtual	AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string	_type;
};

#endif

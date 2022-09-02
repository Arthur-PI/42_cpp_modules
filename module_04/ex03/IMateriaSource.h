/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 08:36:39 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/01 10:09:32 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_H
# define IMATERIA_SOURCE_H

# include <string>
# include "AMateria.h"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void		learnMateria(AMateria* materia) = 0;
		virtual AMateria*	createMateria(const std::string& type) = 0;
};

#endif

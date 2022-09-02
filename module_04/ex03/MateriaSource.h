/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 08:49:15 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/01 10:11:00 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

# include "IMateriaSource.h"

class	MateriaSource: public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& materiaSource);
		~MateriaSource(void);
		MateriaSource&	operator=(const MateriaSource& materiaSource);

		void		learnMateria(AMateria* materia);
		AMateria*	createMateria(const std::string& type);

		AMateria*	getMateria(int i) const;

	private:
		static const int	NB_MATERIAS = 4;

		AMateria*	_materias[NB_MATERIAS];

};


#endif

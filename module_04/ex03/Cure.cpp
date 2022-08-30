/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:56:13 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 19:57:37 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.h"

Cure::Cure(void): AMateria("cure") {}

Cure::Cure(const Cure& cure): AMateria(cure) {}

Cure::~Cure(void) {}

Cure&	Cure::operator=(const Cure& cure)
{
	_type = cure.getType();
	return *this;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*	Cure::clone(void) const
{
	return new Cure(*this);
}

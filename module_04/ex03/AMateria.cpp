/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:19:14 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 19:52:20 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"

AMateria::AMateria(void)
{
	_type = "void";
}

AMateria::AMateria(const std::string& type)
{
	_type = type;
}

AMateria::AMateria(const AMateria& materia)
{
	*this = materia;
}

AMateria&	AMateria::operator=(const AMateria& materia)
{
	_type = materia.getType();
	return *this;
}

const std::string&	AMateria::getType(void) const
{
	return _type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* do nothing to " << target.getName() << " *" << std::endl;
}

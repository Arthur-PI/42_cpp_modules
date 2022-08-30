/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:10:02 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 13:52:12 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain clone constructor called\n";
	*this = brain;
}

Brain&	Brain::operator=(const Brain& brain)
{
	std::cout << "Brain copy assignment operator called\n";
	for (int i=0; i < MAX_IDEAS; i++)
		_ideas[i] = brain.getIdea(i);
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called\n";
}

std::string	Brain::getIdea(int i) const
{
	return _ideas[i];
}

void	Brain::setIdea(int i, std::string idea)
{
	_ideas[i] = idea;
}

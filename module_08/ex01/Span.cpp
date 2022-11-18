/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:36:20 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/18 14:11:17 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.h"

Span::Span(void)
{
	_size = 0;
}

Span::Span(const Span& span)
{
	_size = span.getSize();
}

Span::Span(unsigned int n)
{
	_size = n;
}

Span::~Span(void) {}

Span&	Span::operator=(const Span& span)
{
	_size = span.getSize();
	return *this;
}

unsigned int	Span::getSize(void) const
{
	return _size;
}

void	Span::addNumber(int n)
{
	if (_tab.size() == _size)
		throw Span::ListFullException();
	_tab.push_back(n);
}

int	Span::shortestSpan(void)
{
	int				shortest;
	unsigned int	len;

	len = _tab.size();
	if (len < 2)
		throw Span::ListEmptyException();
	shortest = std::numeric_limits<int>::max();
	std::sort(_tab.begin(), _tab.end());
	for (unsigned int i=0; i < len - 1; i++)
		shortest = std::min(shortest, _tab[i + 1] - _tab[i]);
	return shortest;
}

int	Span::longestSpan(void) const
{
	int	min;
	int	max;

	if (_tab.size() < 2)
		throw Span::ListEmptyException();
	min = *std::min_element(_tab.begin(), _tab.end());
	max = *std::max_element(_tab.begin(), _tab.end());
	return (max - min);
}

void	Span::insert(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (; begin != end; begin++)
		this->addNumber(*begin);
}

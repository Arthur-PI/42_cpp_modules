/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:34:21 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/18 14:11:26 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <algorithm>
# include <vector>
# include <limits>

class	Span
{
	public:
		// Constructors
		Span(void);
		Span(const Span& span);
		Span(unsigned int n);

		// Destructor
		~Span(void);

		// Operators
		Span&	operator=(const Span& span);

		// Exceptions
		struct ListFullException: public std::runtime_error {
			ListFullException(void): std::runtime_error("the list of numbers is full") {}
		};

		struct ListEmptyException: public std::runtime_error {
			ListEmptyException(void): std::runtime_error("the list of numbers is empty") {}
		};

		// Getters and Setters
		unsigned int	getSize(void) const;

		// Member functions
		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void) const;
		void	insert(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	private:
		unsigned int		_size;
		std::vector<int>	_tab;

};

#endif

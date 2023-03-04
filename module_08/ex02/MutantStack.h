/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:59:01 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/18 16:43:04 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

# include <iostream>
# include <stack>

template <class T, class Container = std::deque<T> >
class	MutantStack: public std::stack<T, Container>
{
	public:
		// Typedefs
		typedef typename Container::iterator iterator;

		// Constructors
		MutantStack(void): std::stack<T, Container>() {}
		MutantStack(const MutantStack& mutantstack): std::stack<T, Container>(mutantstack) {}

		// Destructor
		~MutantStack(void) {}

		// Member functions
		iterator	begin(void)
		{
			return this->c.begin();
		}

		iterator	end(void)
		{
			return this->c.end();
		}

		const iterator	begin(void) const
		{
			return this->c.begin();
		}

		const iterator	end(void) const
		{
			return this->c.end();
		}

	private:

};

#endif

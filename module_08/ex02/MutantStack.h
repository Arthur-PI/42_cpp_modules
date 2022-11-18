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

template <class T>
class	MutantStack: public std::stack<T>
{
	public:
		// Typedefs
		typedef T* iterator;

		// Constructors
		MutantStack(void): std::stack<T>() {}
		MutantStack(const MutantStack& mutantstack): std::stack<T>(mutantstack) {}

		// Destructor
		~MutantStack(void) {}

		// Operators
		MutantStack&	operator=(const MutantStack& mutantstack)
		{
			std::stack<T>::operator=(mutantstack);
		}

		// Getters and Setters

		// Member functions

		iterator	begin(void)
		{
			if (this->empty())
				return (NULL);
			return ((&this->top()) - (this->size() - 1));
		}

		iterator	end(void)
		{
			if (this->empty())
				return (NULL);
			return (&this->top());
		}


	private:

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:57:58 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/18 00:48:10 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <limits>

template <class T>
class	Array
{
	public:
		// Constructors
		Array(void) {
			_elems = NULL;
			_size = 0;
		}

		Array(const Array<T>& array) {
			_size = array.size();
			_elems = new T[_size];
			for (unsigned int i=0; i < _size; i++)
				_elems[i] = array[i];
		}

		Array(unsigned int n) {
			_size = n;
			_elems = new T[n]();
		}

		// Destructor
		~Array(void) {
			delete[] _elems;
		}

		// Operators
		Array<T>&	operator=(const Array<T>& array) {
			if (this != &array) {
				delete[] _elems;
				_size = array.size();
				_elems = new T[_size];
				for (unsigned int i=0; i < _size; i++)
					_elems[i] = array[i];
			}
			return *this;
		}

		// Getters and Setters
		T&	operator[](std::size_t n) const {
			if (n >= _size || n > std::numeric_limits<unsigned int>::max())
				throw std::exception();
			return _elems[n];
		}

		// Member functions
		unsigned int	size(void) const {
			return _size;
		}

	private:
		T*				_elems;
		unsigned int	_size;

};

#endif

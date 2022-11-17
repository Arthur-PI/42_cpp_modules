/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:57:58 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/17 22:51:53 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template <class T>
class	Array
{
	public:
		// Constructors
		Array(void) {
			_elems = new T[0];
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
			_elems = new T[n];
		}

		// Destructor
		~Array(void) {
			delete[] _elems;
		}

		// Operators
		Array<T>&	operator=(const Array<T>& array) {
			if (this != &array) {
				_size = array.size();
				_elems = new T[_size];
				for (unsigned int i=0; i < _size; i++)
					_elems[i] = array[i];
			}
			return *this;
		}

		// Getters and Setters
		T&	operator[](unsigned int n) const {
			if (n >= _size)
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

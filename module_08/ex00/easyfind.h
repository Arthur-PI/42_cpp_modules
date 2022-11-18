/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:22:25 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/18 12:07:19 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <algorithm>

template <typename T>
int	easyfind(T& container, int n)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), n);
	if (it != container.end())
		return it - container.begin();
	return -1;
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:10:57 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/17 21:24:36 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template <typename T>
void    iter(T *arr, int size, void (*fun)(T&))
{
    int i;

    i = 0;
    while (i < size)
        fun(arr[i++]);
}

#endif

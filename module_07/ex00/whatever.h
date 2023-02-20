/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:45:11 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/17 21:06:11 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template <typename T>
void swap(T& a, T& b)
{
    T    tmp;

    tmp = a;
    a = b;
    b = tmp;
}


template <typename T>
const T& min(const T& a, const T& b)
{
    if (a < b)
        return a;
    return b;
}

template <typename T>
const T& max(const T& a, const T& b)
{
    if (a > b)
        return a;
    return b;
}

#endif

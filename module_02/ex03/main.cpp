/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:15:17 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/24 19:29:55 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

int	main(void)
{
	// TODO tests
	std::cout << bsp(Point(2, 0), Point(3, 2), Point(1, 2), Point(2, 2.1)) << std::endl;
	return 0;
}

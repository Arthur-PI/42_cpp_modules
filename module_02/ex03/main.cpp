/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:15:17 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/25 09:16:30 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

int	main(void)
{
	Point	a(2, 0);
	Point	b(3, 2);
	Point	c(1, 2);

	Point	d(2, 1);
	Point	e(2, 2.1);
	Point	f(2, 2);
	std::cout << "The Triangle is a(" << a.getX() << "," << a.getY() << "), b(" << b.getX() << "," << b.getY() << "), c(";
	std::cout << c.getX() << "," << c.getY() << "):\n";
	std::cout << "The point (" << d.getX() << "," << d.getY() << ") is in triangle ? " << bsp(a, b, c, d) << std::endl;
	std::cout << "The point (" << e.getX() << "," << e.getY() << ") is in triangle ? " << bsp(a, b, c, e) << std::endl;
	std::cout << "The point (" << f.getX() << "," << f.getY() << ") is in triangle ? " << bsp(a, b, c, f) << std::endl;
	return 0;
}

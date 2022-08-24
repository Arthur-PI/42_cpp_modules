/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:48:15 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/24 19:06:14 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point(void): _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(const Point& point): _x(point.getX()), _y(point.getY()) {}

Point&	Point::operator=(const Point& point)
{
	(void)point;
	return *this;
}

Point::~Point(void) {}

Point::Point(float x, float y): _x(Fixed(x)), _y(Fixed(y)) {}

Fixed	Point::getX(void) const
{
	return _x;
}

Fixed	Point::getY(void) const
{
	return _y;
}

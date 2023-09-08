/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:11:27 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/08 15:52:50 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


bool Point::bsp(const Point& a, const Point& b, const Point& c, const Point& point) {
	// Barycentric coordinates:
	// U triangle Area -> CAP Area / ABC Area
	Fixed u (((b.y - c.y) * (point.x - c.x) + (c.x - b.x) * (point.y - c.y)) /
				((b.y - c.y) * (a.x - c.x) + (c.x - b.x) * (a.y - c.y)));
	// V triangle Area -> ABP Area / ABC Area
	Fixed v (((c.y - a.y) * (point.x - c.x) + (a.x - c.x) * (point.y - c.y)) /
				((b.y - c.y) * (a.x - c.x) + (c.x - b.x) * (a.y - c.y)));
	// W triangle Area -> BCP Area / ABC Area
	Fixed w (Fixed(1.0f) - u - v);

	// Check if point is inside the triangle
	return u >= 0 && v >= 0 && w >= 0 && u <= 1 && v <= 1 && w <= 1;
}


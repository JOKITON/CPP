/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:04:02 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/08/11 23:12:01 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
	const Fixed x;
	const Fixed y;
	
	public:
		Point( void ); // constr
		~Point( void ); // destr
		Point(const float p1, const float p2); // param-constr
		Point(Point& p); // copy-constr
		Point&	operator=(const Point& p); // copy assign-overload
		bool bsp(const Point& a, const Point& b, const Point& c, const Point& point) {
			// Calculate barycentric coordinates
			Fixed u (((b.y - c.y) * (point.x - c.x) + (c.x - b.x) * (point.y - c.y)) /
						((b.y - c.y) * (a.x - c.x) + (c.x - b.x) * (a.y - c.y)));

			Fixed v (((c.y - a.y) * (point.x - c.x) + (a.x - c.x) * (point.y - c.y)) /
						((b.y - c.y) * (a.x - c.x) + (c.x - b.x) * (a.y - c.y)));

			Fixed w (Fixed(1.0f) - u - v);

			// Check if point is inside the triangle
			return u >= 0 && v >= 0 && w >= 0 && u <= 1 && v <= 1 && w <= 1;
		}

};

#endif
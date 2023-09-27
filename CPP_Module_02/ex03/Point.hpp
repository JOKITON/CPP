/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:04:02 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/28 01:44:52 by jaizpuru         ###   ########.fr       */
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
		float	getX( void );
		float	getY( void );
		bool bsp(const Point& a, const Point& b, const Point& c, const Point& point);
};

#endif

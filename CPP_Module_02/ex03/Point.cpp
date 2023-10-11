/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:09:37 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/11 23:27:25 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(Fixed(0)), y(Fixed(0)) {
	std::cout << "[Point] Constructor called" << std::endl;
	return ;
}

Point::~Point( void ) {
	std::cout << "[Point] Destructor called" << std::endl;
	return ;
}

Point::Point( Point& p) {
	std::cout << "[Point] Copy Constructor called" << std::endl;
	*this = p;
	return ;
}

Point::Point(const float p1, const float p2) : x( Fixed(p1)), y( Fixed(p2)) {
    std::cout << "[Point] Parameter Constructor called" << std::endl;
}

Point& Point::operator=( const Point& p ) {
	std::cout << "[Point] Copy Assigment Operator Overload" << std::endl;
	if (this != &p) {
		*this = p;
	}
	return *this;
}

float	Point::getX( void ) {
	return x.toFloat();
}

float	Point::getY( void ) {
	return y.toFloat();
}

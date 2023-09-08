/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:09:37 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/08/11 23:03:33 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) {
	std::cout << "Default Constructor Called~" << std::endl;
	return ;
}

Point::~Point( void ) {
	std::cout << "Default Destructor Called~" << std::endl;
	return ;
}

Point::Point( Point& p) {
	std::cout << "Copy Constructor called~" << std::endl;
	*this = p;
	return ;
}

Point::Point(const float p1, const float p2)
    : x(Fixed(p1)), y(Fixed(p2)) {
    std::cout << "Parameter Constructor called~" << std::endl;
}

Point& Point::operator=( const Point& p ) {
	std::cout << "Copy Assigment Operator Overload" << std::endl;
	if (this != &p) {
		*this = p;
	}
	return *this;
}


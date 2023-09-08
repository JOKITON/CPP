/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/08/11 23:17:17 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
/* Fixed const c( Fixed (10) / Fixed ( 2 ) );
Fixed const d( Fixed ( 3.01f ) + Fixed ( 4.05f ));
Fixed const e( Fixed ( 3.01f ) - Fixed ( 4.05f )); */
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
/* std::cout << c << std::endl;
std::cout << d << std::endl;
std::cout << e << std::endl;
std::cout << Fixed::min (a, e) << std::endl;
std::cout << Fixed::max (a, e) << std::endl; */
Point A(1.0, 1.0);
    Point B(4.0, 1.0);
    Point C(2.5, 5.0);
    Point P(2.5, 3.0);

    if (A.bsp(A, B, C, P)) {
        std::cout << "Point P is inside the triangle ABC." << std::endl;
    } else {
        std::cout << "Point P is outside the triangle ABC." << std::endl;
    }

return 0;
}
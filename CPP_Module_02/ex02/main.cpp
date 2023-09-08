/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/08/11 11:00:28 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
return 0;
}
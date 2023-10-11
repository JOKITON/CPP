/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/11 23:23:13 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	execTests(void) {
	std::cout << "\033[34m" << "-------------------------------" << "\033[0m" << std::endl;
	std::cout << "\033[31m" << "\n--My own tests : " << "\033[0m" <<std::endl;
	// ! Arithmetic operators in constructors
	Fixed const c( Fixed(10) / Fixed(2) + Fixed(0.4f) ); // Arithmethic operators
	Fixed const d( Fixed(2) + Fixed(2.5f) );
	Fixed const e( Fixed(6) - Fixed(5.1f) );
	Fixed const f( Fixed(6) * Fixed(1) );
	Fixed const g(Fixed(5.4f));
	std::cout << "\033[34m" << "-------------------------------" << "\033[0m" << std::endl;
	// ! Displays numbers
	std::cout << "C is : " << c << std::endl; // Display numbers (Overload Insertion)
	std::cout  << "D is : " << d << std::endl;
	std::cout << "E is : " << e << std::endl;
	std::cout << "F is : " << f << std::endl;
	std::cout << "G is : " << g << " (equal to C)" << std::endl;
	std::cout << "\033[34m" << "-------------------------------" << "\033[0m" << std::endl;
	// ! Comparison operators
	std::cout << "\033[35m" << "\nComparison operators : " << "\033[0m" << std::endl;
	if (c > d)
	std::cout << "[if (C > D)] || " << "[" << c << "] > [" << d << "]\n" << "	C is GREATER than D" << std::endl;
	if (d < f)
	std::cout << "[if (D < F)] || " << "[" << d << "] < [" << f << "]\n" << "	D is SMALLER than F" << std::endl;
	if (e != f)
	std::cout << "[if (E != F)]\n	E is NOT EQUAL to F" << std::endl;
	if (c == g)
	std::cout << "[if (C == G)]\n	C is EQUAL to G" << std::endl;
	if (c >= g)
	std::cout << "[if (C >= G)]\n	C is EQUAL or HIGHER to G" << std::endl;
	if (c <= g)
	std::cout << "[if (C <= G)]\n	C is EQUAL or LOWER to G" << std::endl;
	std::cout << "\033[34m" << "-------------------------------" << "\033[0m" << std::endl;
	// ! Min & Max member functions
	std::cout << "\n" << "\033[35m" << "Min & Max Member functions : " << "\033[0m" << std::endl;
	std::cout << "-Min between C & E: " << std::endl;
	std::cout << Fixed::min (c, e) << std::endl;
	std::cout << "\n-Max betweeen C & E: " << std::endl;
	std::cout << Fixed::max (c, e) << std::endl;
	std::cout << "\033[34m" << "-------------------------------" << "\033[0m" << std::endl;

	std::cout << "\n" << "\033[31m" << "Destructors : " << "\033[0m" << std::endl;
}

int main( void ) {
	std::cout << "Default Constructor for [A] : " << std::endl;
	Fixed a;

	std::cout << "\nDouble Constructor for [B] : " << std::endl;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	// My own tests (Not in subject)
	// execTests();
	
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/28 01:46:10 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

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
	std::cout << "[if (C > D)]\n	C is GREATER than D" << std::endl;
	if (d < f)
	std::cout << "[if (D < F)]\n	D is SMALLER than F" << std::endl;
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

void    subjectTests(void) {
	std::cout << "Default Constructor for A : " << std::endl;
	Fixed a;

	std::cout << "\nDouble Constructor for B : " << std::endl;
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
}

int main( void ) {
	// Subject tests
	//subjectTests();

	// My own tests (Not in subject)
	//execTests();

	std::cout << "Point A : " << std::endl;
	Point A(1.0, 1.0);
	std::cout << "\nPoint B : " << std::endl;
    Point B(4.0, 1.0);
	std::cout << "\nPoint C : " << std::endl;
    Point C(2.5, 5.0);


	std::cout << "\033[34m" << "-------------------------------" << "\033[0m" << std::endl;
    Point P1(2.5, 3.0);
	std::cout << "Point P1 : (" <<  P1.getX() << "," << P1.getY() << ")" << std::endl;
    if (A.bsp(A, B, C, P1)) {
        std::cout << "Point P1 is inside the triangle ABC." << std::endl;
    } else {
        std::cout << "Point P1 is outside the triangle ABC." << std::endl;
    }
	std::cout << std::endl;

    Point P2(6.5, 3.0);
	std::cout << "Point P2 : (" <<  P2.getX() << "," << P2.getY() << ")" << std::endl;
    if (A.bsp(A, B, C, P2)) {
        std::cout << "Point P2 is inside the triangle ABC." << std::endl;
    } else {
        std::cout << "Point P2 is outside the triangle ABC." << std::endl;
    }

	std::cout << "\033[34m" << "-------------------------------" << "\033[0m" << std::endl;
	return 0;
}
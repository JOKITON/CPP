/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/11 23:29:08 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

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
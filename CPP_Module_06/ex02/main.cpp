/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:06:50 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/17 12:57:37 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <math.h>

Base * generate(void) {
	(srand(time(NULL))); // seed the random number sequence

	int	i = rand() % 3;
	
	switch (i) {
		case 0:
			std::cout << "{A} has been created." << std::endl;
			return new A();
		case 1:
			std::cout << "{B} has been created." << std::endl;
			return new B();
		case 2:
			std::cout << "{C} has been created." << std::endl;
			return new C();
	}
	return NULL;
}

void identify(Base* p) {
	
	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "[Base* p] P is an A" << std::endl;
	else if (b)
		std::cout << "[Base* p] P is an B" << std::endl;
	else if (c)
		std::cout << "[Base* p] P is an C" << std::endl;
	else
		std::cout << "[Base* p] P is NULL" << std::endl;
	
}

void identify(Base& p) {

	try { /* A */
		A	&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "[Base& p] P is an A" << std::endl;
	}
	catch ( std::exception& e ) { /* B */
		try {
			B	&b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "[Base& p] P is an B" << std::endl;
		}
		catch ( std::exception& e ) { /* C */
			try {
				C	&c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "[Base& p] P is an C" << std::endl;
			}
			catch ( std::exception& e ) { /* NULL */
				std::cout << "[Base& p] P is NULL" << std::endl;
			}
		}
	}
}

void	execTests( void ) {

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ConstructDataTypes]-----------------------" << END << std::endl;
	std::cout << std::endl;
	A	a1;
	B	b1;
	C	c1;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ Base* generate() ]-----------------------" << END << std::endl;
	Base	*test1 = generate();


	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ void identify(Base* p) ]-----------------------" << END << std::endl;
	identify(test1);

	identify(&a1);
	identify(&b1);
	identify(&c1);
	identify(NULL);

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ void identify(Base& p) ]-----------------------" << END << std::endl;

	identify(a1);
	identify(b1);
	identify(c1);

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ Destructors ]-----------------------" << END << std::endl;
	
	delete test1;
}

int	main(void) {

	/* my own tests */
	execTests();

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:06:50 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/15 17:24:55 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <math.h>

Base * generate(void) {
/* 	When compiling and creating an executable, the value that rand() will return won't change if the program is executed multiple times.
	To force our program to have some real random number, we made use of the time of the system, giving it a number from where it can generate a new one,
	everytime the program is executed, that is called 'seeding' the number generator. */
	
	(srand(time(NULL)));

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
	
/* 	Instead of using 'static_cast' that is used for numeric data, values on integers, float, double, ...
	The data casted with 'static_cast' needs to be known before-hand.

	We will need to use 'dynamic_cast', an conversion option used specifically for pointers and references {* &}
	Using 'dynamic_cast' makes the compiler check if the given input for casting is correct, making it safer than the previous 'static_cast'
	Of course, having that extra check inside 'dynamic_cast' makes the time of execution a little longer, but it is a must in this case. */

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

/* 	We have a similar case than before, but instead of using a pointer to the object, we have a reference.
	We needed to proceed in a different way, since casting return values work different inside pointer/references:
	
	1- Pointers: Return NULL if not if failed.
	2- References: Return a exception throw at 'Exception bad_cast'
	
	Since we need to get rid of that exception for the wanted clean output of the exercise, we need to manually catch
	those exceptions using the same format 'std::exception' and try again other cases inside.  */

	try { /* A */
		A	&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "[Base& p] P is an A" << std::endl;
	}
	catch ( std::exception& eB ) { /* B */
		try {
			B	&b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "[Base& p] P is an B" << std::endl;
		}
		catch ( std::exception& eC ) { /* C */
			try {
				C	&c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "[Base& p] P is an C" << std::endl;
			}
			catch ( std::exception& eNULL ) { /* NULL */
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

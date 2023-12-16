/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:31:02 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/12 17:33:36 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	execTests( void ) {
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[myOwnTests]-----------------------" << END << std::endl;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Constructors]-----------------------" << END << std::endl;
	
	Span	test0(1);
	std::cout << test0.getSize() << std::endl;

	Span	test1;
	std::cout << test1.getSize() << std::endl;

	Span	test2(10000);
	std::cout << test2.getSize() << std::endl;

	Span	test3(50000);
	std::cout << test3.getSize() << std::endl;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[addNumber]-----------------------" << END << std::endl;
	test0.addNumber(0);

	try {
        test0.addNumber(-200);
    } // error-case: no space
    catch ( std::exception & e ) {
        std::cout << e.what() << std::endl;
    }
	// test1.addNumber(900);

	test2.addNumbers();
	try { // error, too many numbers
		test2.addNumber(1);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	test3.addNumbers();

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Shortest & Longest Span]-----------------------" << END << std::endl;
	
	try {
		std::cout << std::endl; // error-case (1 number)
		std::cout << "Shortest span for test0: ( 1 number ) " << test0.shortestSpan() << std::endl;
	}
	catch (std::exception & e ) {
		std::cout << std::endl;
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << std::endl;
		std::cout << "Longest span for test0: " << test0.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << std::endl;
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl; // error-case (0 numbers)
		std::cout << "Shortest span for test1: ( 0 numbers )" << test1.shortestSpan() << std::endl;
	}
	catch (std::exception & e ) {
		std::cout << std::endl;
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << std::endl;
		std::cout << "Longest span for test1: " << test1.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "[Span::shortestSpan] span for test2: " << test2.shortestSpan() << std::endl;
	std::cout << "[Span::longestSpan] span for test2: " << test2.longestSpan() << std::endl;
	std::cout << std::endl;

	std::string	input;
	while (input == "") {
		std::cout << "Do you want to get shortestSpan & longestSpan from {50.000} array? (yes/no)" << std::endl;
		std::getline(std::cin, input);
		if (!input.compare("yes")) {
			std::cout << std::endl;
			std::cout << "Calculating your results..." << std::endl;
			std::cout << "[Span::shortestSpan] span for test3: " << test3.shortestSpan() << std::endl;
			std::cout << "[Span::longestSpan] span for test3: " << test3.longestSpan() << std::endl;
			std::cout << std::endl;
			break ;
		}
		if (!input.compare("no"))
			break ;
		else
			input = "";
		std::cout << std::endl;
	}

	std::cout << std::endl;


	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Assignment Operator]-----------------------" << END << std::endl;
	
	Span	*test7 = new Span(10);
	test7->addNumbers();
	test2 = *test7;

    std::cout << "Size of test2 : " << test2.getSize() << std::endl;  // test for checking if deep copy works

/*	delete	test7; // remove the delete in destructors!

	std::cout << "Size of test2 : " << test2.getSize() << std::endl;
	std::vector<int>	getVector1 = test2.getVector();
	for (long unsigned int N = 0; N < getVector1.size(); N++) {
		std::cout << getVector1[N] << std::endl;
	} */

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Copy Constructor]-----------------------" << END << std::endl;
	Span	test6(test2);

	std::cout << "Size of test6 : " << test6.getSize() << std::endl;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Destructors]-----------------------" << END << std::endl;

	delete	test7;
}

void	testsSubject( void ) {
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[subjectTests]-----------------------" << END << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int	main( void ) {

	/* subject tests */
	testsSubject( );

	/* my own tests */
	execTests( );
}

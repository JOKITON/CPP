/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:31:02 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/23 21:41:50 by jaizpuru         ###   ########.fr       */
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

	test2.addNumbers();

	test3.addNumbers();

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Shortest & Longest Span]-----------------------" << END << std::endl;
	try {
/* 	std::cout << std::endl; // error-case (1 number)
	std::cout << "Shortest span for test0: " << test0.shortestSpan() << std::endl;
	std::cout << "Longest span for test0: " << test0.longestSpan() << std::endl;
	std::cout << std::endl; */

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
	}
	catch (std::exception & e ) {
		std::cout << std::endl;
		std::cout << BBLACK << RED << "-----------------------[Exception]-----------------------" << END << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Assignment Operator]-----------------------" << END << std::endl;
	test2 = test3;

	std::cout << "Size of test2 : " << test2.getSize() << std::endl;


	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Copy Constructor]-----------------------" << END << std::endl;
	Span	test6(test3);

	std::cout << "Size of test6 : " << test6.getSize() << std::endl;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Destructors]-----------------------" << END << std::endl;

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

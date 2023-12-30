/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:28:31 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/18 19:48:33 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	execDeque( void ) {
	std::cout << BCYAN << BLACK << "-------------------------[testDeque]-------------------------" << END <<  std::endl;
	std::deque<int>		testDeque;

	testDeque.assign(10, 1);

	for (int i = 2; i < 100; i++) {
		testDeque.push_back(i);
	}
	std::cout << "[std::deque] Inserted numbers ranging from 1-99..." << std::endl;
	std::cout << std::endl;

	std::string	input = "";
	while (input == "") {
		std::cout << "[checkData] Do you want to check the numbers inside 'std::deque' container? (yes/no)" << std::endl;
		std::getline(std::cin, input);
		if (!input.compare("yes")) {
			std::deque<int>::iterator	testBegin = testDeque.begin();
			std::deque<int>::iterator	testEnd = testDeque.end();
			while ( testBegin != testEnd ) {
				std::cout << " testDeque[] = " << *testBegin << std::endl;
				testBegin++;
			}
			break ;
		}
		else if (!input.compare("no"))
			break ;
		input = "";
	}
	std::cout << std::endl;
	
	try {
		input = "";
		while (input == "") {
			std::cout << "[easyfind] What number do you want to find insde the container?" << std::endl;
			std::getline(std::cin, input);
			if (atoi(input.c_str()) || input == "0") {
				easyfind( testDeque, atoi(input.c_str()) );
				break ;
			}
			input = "";
		}
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}

void	execVector( void ) {
	std::cout << BCYAN << BLACK << "-------------------------[testVector]-------------------------" << END <<  std::endl;
	std::vector<int>		testVector;

	testVector.assign(10, -99);

	for (int i = -98; i < 50; i++) {
		testVector.push_back(i);
	}
	std::cout << "[std::vector] Inserted numbers ranging from -99-49..." << std::endl;
	std::cout << std::endl;

	std::string	input = "";
	while (input == "") {
		std::cout << "[checkData] Do you want to check the numbers inside 'std::vector' container? (yes/no)" << std::endl;
		std::getline(std::cin, input);
		if (!input.compare("yes")) {
			std::vector<int>::iterator	testBegin = testVector.begin();
			std::vector<int>::iterator	testEnd = testVector.end();
			while ( testBegin != testEnd ) {
				std::cout << " testVector[] = " << *testBegin << std::endl;
				testBegin++;
			}
			break ;
		}
		else if (!input.compare("no"))
			break ;
		input = "";
	}
	std::cout << std::endl;
	
	try {
		input = "";
		while (input == "") {
			std::cout << "[easyfind] What number do you want to find insde the container?" << std::endl;
			std::getline(std::cin, input);
			if (atoi(input.c_str()) || input == "0") {
				easyfind( testVector, atoi(input.c_str()) );
				break ;
			}
			input = "";
		}
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}

void	execList( void ) {
	std::cout << BCYAN << BLACK << "-------------------------[testList]-------------------------" << END <<  std::endl;
	std::list<int>		testList;

	testList.assign(1, 999);

	for (int i = 1000; i < 10000; i++) {
		testList.push_back(i);
	}
	std::cout << "[std::List] Inserted numbers ranging from 999-9999..." << std::endl;
	std::cout << std::endl;

	std::string	input = "";
	while (input == "") {
		std::cout << "[checkData] Do you want to check the numbers inside 'std::list' container? (yes/no)" << std::endl;
		std::getline(std::cin, input);
		if (!input.compare("yes")) {
			std::list<int>::iterator	testBegin = testList.begin();
			std::list<int>::iterator	testEnd = testList.end();
			while ( testBegin != testEnd ) {
				std::cout << " testList[] = " << *testBegin << std::endl;
				testBegin++;
			}
			break ;
		}
		else if (!input.compare("no"))
			break ;
		input = "";
	}
	std::cout << std::endl;
	
	try {
		input = "";
		while (input == "") {
			std::cout << "[easyfind] What number do you want to find insde the container?" << std::endl;
			std::getline(std::cin, input);
			if (atoi(input.c_str())) {
				easyfind( testList, atoi(input.c_str()) );
				break ;
			}
			input = "";
		}
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}

int	main( void ) {

	/* my own tests */
	execDeque();

	execVector();

	execList();

}

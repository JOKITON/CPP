/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:28:31 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/21 22:07:45 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	execTests( void ) {
	std::vector<int>	test1;

	std::cout << "[std::vector<int>] Executed 'assign'." << std::endl;
	test1.assign(10, 1);

	std::cout << "[std::vector<int>] Executed 'size'." << std::endl;
	std::cout << "Size of test1: " << test1.size() << std::endl;

	std::cout << "[std::vector<int>] Executed 'operator[]'." << std::endl;
	for (int i = 0; i < 10; i ++) {
		if ((i > 2) && (i < 6))
			test1[i] = 2;
		else if (i > 5 && i < 9)
			test1[i] = 3;
		else if (i == 9)
			test1[i] = 0;
		std::cout << "test[" << i << "] == " << (test1)[i] << std::endl;
	}

	std::cout << "[std::vector<int>] Executed 'at'." << std::endl;
	test1.at(9) = 100;

	std::cout << "[std::vector<int>] Executed 'operator[]'." << std::endl;
	std::cout << "test[9] == " << test1[9] << std::endl;

	std::cout << "[std::vector<int>] Executed 'begin'." << std::endl;
	std::vector<int>::iterator firstNumber = test1.begin();

	std::cout << "[std::vector<int>::iterator] Executed 'operator[]'." << std::endl;
	for (int i = 0; i < 10; i ++) {
		std::cout << "test[" << i << "] == " << (firstNumber)[i] << std::endl;
	}
	try {
	easyfind( test1, 100 ); // important function
	easyfind( test1, -1 ); }
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "[std::vector<int>] Executed 'clear'." << std::endl;
	test1.clear();
	std::cout << "[std::vector<int>] Executed 'size'." << std::endl;
	std::cout << "Size of test1: " << test1.size() << std::endl;


}

int	main( void ) {
	/* my own tests */
	execTests();

}
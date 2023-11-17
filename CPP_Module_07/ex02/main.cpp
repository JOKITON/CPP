/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:13:21 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/18 00:57:24 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	execTests() {

	Array<int>	test1(900);
	Array<int>	test2;

	std::cout << "Size of test1: " << test1.size() << std::endl;
	std::cout << "Size of test2: " << test2.size() << std::endl;
	std::cout << std::endl;

	Array<std::string>	test3(7);

	std::string	*ref = test3.getArray();

	for (int h = test3.size() - 1; h >= 0; h--) {
		ref[h] = "Buenas tardes";
	}

	Array<std::string>	test4(test3);
	
	std::string	*ref2 = test4.getArray();

	for (int h = test4.size() - 1; h >= 0; h--) {
		std::cout << ref2[h] << std::endl;
	}

}

int	main( void ) {

	/* my own tests */
	execTests();

}
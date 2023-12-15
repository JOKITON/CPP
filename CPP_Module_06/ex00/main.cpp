/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:41:09 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/15 17:41:52 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main( int ac, char **ar ) {

	if (ac == 2) {
		/* ScalarConverter tests */
		try {
		ScalarConverter::convert(ar[1]);
		}
		// ScalarConverter	test1(ar[1]); // more tests
		// ScalarConverter	test2(test1);
/* 		ScalarConverter	test3;
		test3 = test1; */
		catch (...) { }
	}
	else
		std::cerr << "[Wrong amount of arguments!] :\n	Usage: [./executable {argument} ]" << std::endl;
}

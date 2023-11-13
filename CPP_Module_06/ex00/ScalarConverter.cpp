/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:04:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/13 16:29:47 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <numbers>
#include <limits>
#include <iomanip>

void	ScalarConverter::convert( const std::string& input ) {
	/* char */
	if (checkChar(input)) {
		char resultChar;
		resultChar = input[0];
		std::cout << "char: " << resultChar << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}

	/* int */
	if (hasFloatFormat(input)) {
		int	resultInt = intItoa(input.c_str());
		std::cout << "int: " << resultInt << std::endl;
	}
	else
		std::cout << "int: " << "Non-displayable" << std::endl;

	/* float */
	if (hasFloatFormat(input)) {
		std::cout << "float: " << std::fixed  << std::setprecision(1) << (floatItoa(input.c_str()))  << "f" << std::endl;
	}
	else
		std::cout << "float: " << "Non-displayable" << std::endl;

	/* double */
	if (hasFloatFormat(input)) {
		std::cout << "double: " << doubleItoa(input.c_str()) << std::endl;
	}
	else
		std::cout << "double: " << "Non-displayable" << std::endl;
}

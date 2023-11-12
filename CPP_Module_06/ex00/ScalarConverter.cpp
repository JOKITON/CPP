/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:04:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/12 16:03:02 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
		std::cout << "float: " << floatItoa(input.c_str()) << "f" << std::endl;
	}
	else
		std::cout << "float: " << "Non-displayable" << std::endl;

	/* double */
	if (hasFloatFormat(input)) {
		std::cout << "float: " << floatItoa(input.c_str()) << "f" << std::endl;
	}
	else
		std::cout << "float: " << "Non-displayable" << std::endl;
}

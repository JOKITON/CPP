/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:04:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/14 12:58:13 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <numbers>
#include <limits>
#include <iomanip>

ScalarConverter::ScalarConverter( const std::string & input) : _input(input) {
	this->_double = atof(_input.c_str());
}

void	ScalarConverter::saveInput( void ) {
	int type = checkInput();
	int	dataTypes[] = {IS_CHAR, IS_INT, IS_FLOAT, IS_DOUBLE};
	int it;

	for (it = 0; it < 4; it++)
		if (type == dataTypes[it])
			break ;

	switch (it) {
		case 0:
			formatChar();
			break ;
		case 1:
			formatInt();
			break ;
		case 2:
			formatFloat();
			break ;
		case 3:
			formatDouble();
			break ;
		default :
			throw what();
	}

}

void	ScalarConverter::convert( const std::string& input ) {
	ScalarConverter	test(input);
	
	test.saveInput();
	test.printOutput();
}

void	ScalarConverter::printOutput( void)  const { // to-do: change everything!
	/* char */
	std::cout << "char: '" << this->_char << "'" << std::endl;

	/* int */
	std::cout << "int: " << this->_int << std::endl;

	/* float */
	std::cout << "float: " << this->_float << std::endl;

	/* double */
	std::cout << "double: " << this->_double << std::endl;
}

int	ScalarConverter::checkInput( void ) {
	std::string input = this->getInput();
	if (!input.compare("nan") || !input.compare("+inf") || !input.compare("-inf") ||
		!input.compare("+inff") || !input.compare("-inff"))
		return (INF_NAN);
	else if (input.length() == 1 && isprint(input[0]) && !isdigit(input[0]))
    	return IS_CHAR;
	else if (hasOnlyDigits( input ) == true)
		return IS_INT;
	else if (hasFloatFormat( input ) == true)
		return IS_FLOAT;
	else if (hasDoubleFormat( input ) == true)
		return IS_DOUBLE;
	return 0;
}

void	ScalarConverter::formatChar( void ) {
	this->_char = static_cast<unsigned char>(this->_input[0]);
	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
}

void	ScalarConverter::formatInt( void ) {
	this->_int = static_cast<int>(this->_double);
	this->_char = static_cast<unsigned char>(this->_int);
	this->_float = static_cast<float>(this->_double);
}

void	ScalarConverter::formatFloat( void ) {
	this->_float = static_cast<float>(this->_double);
	this->_int = static_cast<int>(this->_float);
	this->_char = static_cast<unsigned char>(this->_float);
}

void	ScalarConverter::formatDouble( void ) {
	this->_float = static_cast<float>(this->_double);
	this->_int = static_cast<int>(this->_double);
	this->_char = static_cast<unsigned char>(this->_double);
}

const char *ScalarConverter::what( void ) const throw() {
	return ("error: Cannot convert OR Impossible to print.\n");
}

const	std::string	ScalarConverter::getInput( void ) {
	return this->_input;
}

int	ScalarConverter::getType( void ) {
	return this->_type;
}

char	ScalarConverter::getChar( void ) {
	return this->_char;
}

int		ScalarConverter::getInteger( void ) {
	return this->_int;
}

float	ScalarConverter::getFloat( void ) {
	return this->_float;
}

double	ScalarConverter::getDouble( void ) {
	return this->_double;
}

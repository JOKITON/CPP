/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:04:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/10 13:27:53 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* Canonical Form */
ScalarConverter::ScalarConverter( void ) : _input(""), _double(0) {
	std::cout << "[ScalarConverter] Default 'constructor' called with {0}." << std::endl;
	this->saveInput();
}

ScalarConverter::~ScalarConverter( void ) {
	//std::cout << "[ScalarConverter] Default 'destructor' called with {0}." << std::endl;
}

ScalarConverter::ScalarConverter( const std::string & input) : _input(input) {
	this->_double = atof(_input.c_str());
}

ScalarConverter::ScalarConverter( const ScalarConverter& p ) : _input(p.getInput()) {
	std::cout << "[ScalarConstructor] Copy constructor called from {" << p.getInput() << "}" << std::endl;
	_type = p.getType();
	_char = p.getChar();
	_int = p.getInteger();
	_float = p.getFloat();
	_double = p.getDouble();
}

ScalarConverter&	ScalarConverter::operator=( const ScalarConverter& p) {
	std::cout << "[ScalarConstructor] Overload Assigment Operator called from {" << p.getInput() << "}" << std::endl;
	if (this != &p) {
		_type = p.getType();
		_char = p.getChar();
		_int = p.getInteger();
		_float = p.getFloat();
		_double = p.getDouble();
	}
	return *this;
}

/* Convert related functions: */
void	ScalarConverter::convert( const std::string& input ) {
	ScalarConverter	test(input);
	
	/* Creates the needed character/numbers inside the class and uses casting along */
	test.saveInput();

	/* Prints the saved data accordingly to the subject */
	test.printOutput();
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

void	ScalarConverter::saveInput( void ) {
	_type = checkInput();
	int	dataTypes[] = {IS_CHAR, IS_INT, IS_FLOAT, IS_DOUBLE};
	int it;

	for (it = 0; it < 4; it++)
		if (_type == dataTypes[it])
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
			// throw what();
			break ;
	}

}

/* 	Why did we use 'static_cast'?
		- This option is optimal for low levels: int, float, double, ...
		- Does not make any check

	There are more types of casting in C++, ones more suitable for inherited classes,
	Others are more suitable for storing individual pointers to objects...
*/

void	ScalarConverter::formatChar( void ) {
	this->_char = static_cast<unsigned char>(this->_input[0]);
	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
}

void	ScalarConverter::formatInt( void ) {
	this->_int = static_cast<int>(this->_double);
	if (_int > 32 && _int < 127)
		this->_char = static_cast<unsigned char>(this->_int);
	this->_float = static_cast<float>(this->_double);
}

void	ScalarConverter::formatFloat( void ) {
	this->_float = static_cast<float>(this->_double);
	this->_int = static_cast<int>(this->_double);
	if (_int > 32 && _int < 127)
		this->_char = static_cast<unsigned char>(this->_int);
}

void	ScalarConverter::formatDouble( void ) {
	this->_float = static_cast<float>(this->_double);
	this->_int = static_cast<int>(this->_double);
	if (_int > 32 && _int < 127)
		this->_char = static_cast<unsigned char>(this->_double);
}

const char *ScalarConverter::what( void ) const throw() {
	return ("error: Cannot convert OR Impossible to print.\n");
}

const	std::string	ScalarConverter::getInput( void ) const {
	return this->_input;
}

int	ScalarConverter::getType( void ) const {
	return this->_type;
}

char	ScalarConverter::getChar( void ) const {
	return this->_char;
}

int		ScalarConverter::getInteger( void ) const {
	return this->_int;
}

float	ScalarConverter::getFloat( void ) const {
	return this->_float;
}

double	ScalarConverter::getDouble( void ) const {
	return this->_double;
}

void	ScalarConverter::printOutput( void)  const {
	/* char */
	if ((isprint(_char) && _input.length() == 1 && _type != -1) || (isprint(_char) && _type != -1))
		std::cout << "char: '" << this->_char << "'" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	
	/* int */
	if (( _double == 0 && (_input.length() > 1 || _input.compare("0")) ) || _type == -1)
		std::cout << "int: impossible" << std::endl;
	else if (((_double > std::numeric_limits<int>::max() || _double < std::numeric_limits<int>::min())))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << this->_int << std::endl;
	
	/* float */
	if (( _double == 0 && (_input.length() > 1 || _input.compare("0")) ) && _type != -1)
		std::cout << "float: impossible" << std::endl;
	else {
		if (_type == -1)
			std::cout << "float: " << _input << "f" << std::endl;
		else
			std::cout << "float: " << std::fixed << std::setprecision(1)
		<< static_cast<double>(_double) << "f" << std::endl;
	}

	/* double */
	if (( _double == 0 && (_input.length() > 1 || _input.compare("0")) ) && _type != -1)
		std::cout << "double: impossible" << std::endl;
	else {
		if (_type == -1)
			std::cout << "double: " << _input << std::endl;
		else
			std::cout << "double: " << std::fixed << std::setprecision(1)
		<< _double << std::endl;
	}
}

bool ScalarConverter::hasDoubleFormat( const std::string& str) {
	const char	*c_str = str.c_str();
	char c = *c_str;
	int check = 0;
    
    
    while ( c ) {
		while ( c && ((c == '-') || (c == '+')) ) {
			c = *++c_str;
            check = 1;
		}
        if (c == '.')
            c = *++(c_str);
		if (c && isdigit(c) == 0) // if is not a digit
			return false;
		c = *++(c_str);
        check = 0;
	}

    if (check == 1) // avoid rare cases
        return false;
	else
        return true;
}

bool ScalarConverter::hasFloatFormat( const std::string& str) {
	const char	*c_str = str.c_str();
	char c = *c_str;
	int check = 0;
    
    
    while ( c ) {
		while ( c && ((c == '-') || (c == '+')) ) {
			c = *++c_str;
            check = 1;
		}
        if (c == '.')
            c = *++(c_str);
        if (c == 'f')
            break ;
		if (c && isdigit(c) == 0) // if is not a digit
			return false;
		c = *++(c_str);
        check = 0;
	}

    if (check == 1 || c != 'f') // avoid rare cases
        return false;
	else
        return true;
}

bool ScalarConverter::hasOnlyDigits( const std::string& str ) {
	const char	*c_str = str.c_str();
	char c = *c_str;
	while ( c ) {
		if (!isdigit(c))
			return false;
		c = *++(c_str);
	}
	return true;
}

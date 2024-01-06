/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:40:20 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/06 13:38:45 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) {
	// std::cout << "[RPN] Default constructor called" << std::endl;
}

bool	isasign( char c ) {
	if (c == PLUS || c == MINUS || c == TIMES || c == DIVISION )
		return true;
	else
		return false;
}

void	RPN::handleSigns( char ch ) {
	if (ch == PLUS && _vector.size() >= 2) {
		float	num1 = _vector.back(); // Get number from container
		_vector.pop_back(); // Remove number from container
		float	num2 = _vector.back();
		_vector.pop_back();
		_vector.push_back(num2 + num1); // Push the result
	}
	else if (ch == MINUS && _vector.size() >= 2) {
		float	num1 = _vector.back();
		_vector.pop_back();
		float	num2 = _vector.back();
		_vector.pop_back();
		_vector.push_back(num2 - num1);
	}
	else if (ch == TIMES && _vector.size() >= 2) {
		float	num1 = _vector.back();
		_vector.pop_back();
		float	num2 = _vector.back();
		_vector.pop_back();
		_vector.push_back(num2 * num1);
	}
	else if (ch == DIVISION && _vector.size() >= 2) {
		float	num1 = _vector.back();
		_vector.pop_back();
		float	num2 = _vector.back();
		_vector.pop_back();
		_vector.push_back(num2 / num1);
	}
}

void	RPN::calc( const std::string& str ) {
	for (size_t pos = 0; str[pos]; pos++ ) {
		int	flagCase;
		/* Format: 8 9 * 9 - 9 - 9 - 4 - 1 + */
		/* Calculation:
			1: ( 8 * 9 ) = 72
			2: ( 72 - 9 ) = 63
			3: ( 63 - 9 ) = 54
			4: ( 54 - 9 ) = 45
			4: ( 45 - 4 ) = 41
			5: ( 41 + 1 ) = 42
							--
		*/
		char ch = str[pos];
		/* Check type of character */
		flagCase = (ch == ' ') ? SPACE : (isdigit(ch) ? DIGIT : (isasign(ch) ? SIGN : FALSE));

		switch (flagCase) {
			case SPACE:
				break ;
			case DIGIT: // Container uses [0]
				_vector.push_back(ch - '0');
				break;
			case SIGN:
				handleSigns(ch);
				break;
			case FALSE:
				std::cerr << "Error" << std::endl;
				return;
		}

	}

	if (_vector.size() == 1) /* Print result */
		std::cout << _vector.back() << std::endl;
	else /* Bad cases fall here */
		std::cerr << "Error: bad input" << std::endl;
}

RPN::~RPN( void ) { }

std::vector<float>	RPN::cpyVector( void ) const {
	return this->_vector;
}

RPN::RPN( RPN& ref ) : _vector(ref.cpyVector()) {

}

RPN& RPN::operator=( const RPN& ref ) {
	if (this != &ref) {
		this->_vector = ref.cpyVector();
	}
	return *this;	
}

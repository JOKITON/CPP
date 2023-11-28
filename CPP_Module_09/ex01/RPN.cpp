/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:40:20 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/28 22:18:31 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) {
	std::cout << "[RPN] Default constructor called" << std::endl;
}

bool	isasign( char c ) {
	if (c == '+' || c == '-' || c == '*' || c == '/' )
		return true;
	else
		return false;
}

void	RPN::handleSigns( char ch ) {
	if (ch == '+' && _vector.size() >= 2) {
		float	num1 = _vector.back();
		_vector.pop_back();
		float	num2 = _vector.back();
		_vector.pop_back();
		_vector.push_back(num2 + num1);
	}
	else if (ch == '-' && _vector.size() >= 2) {
		float	num1 = _vector.back();
		_vector.pop_back();
		float	num2 = _vector.back();
		_vector.pop_back();
		_vector.push_back(num2 - num1);
	}
	else if (ch == '*' && _vector.size() >= 2) {
		float	num1 = _vector.back();
		_vector.pop_back();
		float	num2 = _vector.back();
		_vector.pop_back();
		_vector.push_back(num2 * num1);
	}
	else if (ch == '/' && _vector.size() >= 2) {
		float	num1 = _vector.back();
		_vector.pop_back();
		float	num2 = _vector.back();
		_vector.pop_back();
		_vector.push_back(num2 / num1);
	}
}

RPN::RPN( std::string& str ) {
	int	flagCase;
	
	for (size_t pos = 0; str[pos]; pos++ ) {
		char ch = str[pos];
		
		flagCase = (ch == ' ') ? CASE_SPACE : (isdigit(ch) ? CASE_DIGIT : (isasign(ch) ? CASE_SIGN : FALSE));

		switch (flagCase) {
			case CASE_SPACE:
				break ;
			case CASE_DIGIT:
				_vector.push_back(ch - '0');
				break;
			case CASE_SIGN:
				handleSigns(ch);
				break;
			case FALSE:
				std::cerr << "Error" << std::endl;
				return;
		}

	}

	if (_vector.size() == 1)
		std::cout << _vector.back() << std::endl;
	else
		std::cerr << "Error: bad input" << std::endl;
}

RPN::~RPN() { }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:31:39 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/18 20:12:36 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _N(0), _vector(new std::vector<int>) {
	std::cout << "[Span] Default constructor has been called." << std::endl;
}

Span::Span( unsigned int N ) : _N(N), _vector(new std::vector<int>[N + 1]) {
	std::cout << "[Span] Constructor with " << N << " has been called." << std::endl;
}

Span::~Span( void ) {
	std::cout << "[Span] Default destructor has been called." << std::endl;
	if (_N != 0)
		delete[] _vector;
	else
		delete	_vector;
}

Span::Span( const Span & p ) {
	std::cout << "[Span] Copy constructor has been called." << std::endl;
	size_t	sizeVector = p.getSize();
	this->_vector = new std::vector<int>[sizeVector];
	(*this->_vector) = (p.getVector());
	this->_N = p.getSize();
}

Span&	Span::operator=( const Span & p ) {
	std::cout << "[Span] Assignment operator has been called." << std::endl;
	if (this != & p) {
		delete[] this->_vector;
		size_t	sizeVector = p.getSize();
		this->_vector = new std::vector<int>[sizeVector];
		*(this->_vector) = (p.getVector());
		this->_N = p.getSize();
	}
	return *this;
}

void	Span::addNumber( int number ) {
	std::size_t	N = _vector->size();
	if (_N == N) {
		std::stringstream	oss;
		oss << "error: exception: too many numbers stored inside: " << N;
		throw (std::runtime_error(oss.str()));
	}
	else
		this->_vector->push_back(number);
}

void	Span::addNumbers( void ) {
	srand(time(NULL));

	for (int i = 0; i < getSize(); i++)
		_vector->push_back(rand());	
}

unsigned int Span::shortestSpan( void ) {
    if (_vector->size() < 2) {
        throw (Span::SpanFailedToFindNumber());
        return 0;
    }

	unsigned int shortest = INT_MIN;
	size_t	size1 = _vector->size();
	unsigned int span;
	size_t numb1;
	size_t numb2;

	for (numb1 = 0; numb1 < size1; ++numb1) {
		
		for (numb2 = numb1 + 1; numb2 < size1; numb2++) {
			span = ((*_vector)[numb1] - (*_vector)[numb2]);
			shortest = (shortest < span) ? shortest : span;
		}

	}

    return shortest;
}

unsigned int Span::longestSpan() {
	if (_vector->size() < 2) {
		throw (Span::SpanFailedToFindNumber());
		return 0;
	}

	std::vector<int>::iterator minElement = std::min_element(_vector->begin(), _vector->end()); // algorimth
	std::vector<int>::iterator maxElement = std::max_element(_vector->begin(), _vector->end());

	unsigned int span = *maxElement - *minElement;
	return span;
}

std::vector<int>	Span::getVector( void ) const {
	return *this->_vector;
}

int					Span::getSize( void ) const {
	return this->_N;
}

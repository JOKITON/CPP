/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/20 15:29:19 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// EX00-F
Fixed::Fixed( void ) {
	std::cout << "[Fixed] Constructor called" << std::endl;
	this->fixed = 0;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "[Fixed] Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed& p) {
	std::cout << "[Fixed] Copy Constructor called" << std::endl;
	this->fixed = p.fixed;
}

Fixed& Fixed::operator=(const Fixed& p) {
    if (this != &p) { // Check for self-assignment
        this->fixed = p.fixed;
    }
    std::cout << "[Fixed] Copy Assigment Operator Called" << std::endl;
    return *this;
}

int	Fixed::getRawBits() const {
	return (this->fixed);
}

void	Fixed::setRawBits( int const raw ) {
	this->fixed = raw;
}

// EX01-F

Fixed::Fixed ( const Fixed& p) {
	std::cout << "[Fixed] Const Copy Constuctor called." << std::endl;
	*this = p; // Calls Copy Assigment Operator
}

Fixed::Fixed ( const int p) {
	std::cout << "[Fixed] Int Constuctor called." << std::endl;
	this->fixed = p * (1 << this->fract);
}

Fixed::Fixed ( const float p) {
	std::cout << "[Fixed] Float Constuctor called." << std::endl;
	this->fixed = roundf(p * (1 << this->fract));
}

float	Fixed::toFloat ( void ) const {
	return static_cast<float>(this->fixed) / (1 << this->fract);
}

int	Fixed::toInt ( void ) const {
	return (int)(this->fixed / ( 1 << this->fract));
}

std::ostream& operator<<(std::ostream& out, const Fixed& t) {
    out << t.toFloat();
    return out;
}

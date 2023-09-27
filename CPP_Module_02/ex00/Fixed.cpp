/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/27 23:48:14 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed (0) {
	std::cout << "[Fixed] Constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "[Fixed] Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed& p) {
	std::cout << "[Fixed] Copy Constructor called" << std::endl;
	this->fixed = p.fixed;
	//*this = p; // deep copy, not appropiate in this case
}

Fixed& Fixed::operator=( Fixed& p ) {
	std::cout << "[Fixed] Copy Assigment Operator Called" << std::endl;
	if (this != &p) // Check for self-assignment
		this->fixed = p.getRawBits();
	return (p);
}

int	Fixed::getRawBits() const {
	std::cout << "[Fixed] getRawBits called" << std::endl;
	return (this->fixed);
}

void	Fixed::setRawBits( int const raw ) {
	this->fixed = raw;
}
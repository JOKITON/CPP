/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/08/06 13:01:53 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "[Fixed] Default Constructor called." << std::endl;
	this->fixed = 0;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "[Fixed] Default Destructor called."
	return ;
}

Fixed::Fixed( Fixed& p) {
	std::cout << "[Fixed] Copy Constructor called." << std::endl;
	this->fixed = p.fixed;
}

Fixed* Fixed::operator=( Fixed* p ) {
	this->fixed = p->fixed;

	return (p);
}

int	Fixed::getRawBits() const {
	return (this->fixed);
}

void	Fixed::setRawBits( int const raw ) {
	this->fixed = raw;
}
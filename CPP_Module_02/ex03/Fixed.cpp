/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/08/11 11:30:34 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// EX00-F

Fixed::Fixed( void ) {
	std::cout << "Default Constructor called~" << std::endl;
	this->fixed = 0;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Default Destructor called~" << std::endl;
	return ;
}

Fixed::Fixed( Fixed& p) {
	std::cout << "Copy Constructor called~" << std::endl;
	this->fixed = p.fixed;
}

Fixed& Fixed::operator=(const Fixed& p) {
    std::cout << "Copy Assignment Operator called~" << std::endl;
    if (this != &p) { // Check for self-assignment
        this->fixed = p.fixed;
    }
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
	std::cout << "Const Copy Constuctor called~" << std::endl;
	*this = p;
}

Fixed::Fixed ( const int p) {
	std::cout << "Int Constuctor called~" << std::endl;
	this->fixed = p * (1 << this->fract);
}

Fixed::Fixed ( const float p) {
	std::cout << "Float Constuctor called~" << std::endl;
	this->fixed = roundf(p * (1 << this->fract));
}

float	Fixed::toFloat ( void ) const {
	return static_cast<float>(this->fixed) / (1 << this->fract);
}

int	Fixed::toInt ( void ) const {
	return (int)(this->fixed / ( 1 << this->fract));
}

std::ostream& operator<<(std::ostream& out, const Fixed& p) {
    out << p.toFloat();
    return out;
}

// EX02-F

bool Fixed::operator>(const Fixed& p) const {
    if ((this->fixed * (1 << this->fract)) > (p.fixed * (1 << p.fract)))
        return true;
    return false;
}

bool Fixed::operator<(const Fixed& p) const {
    if ((this->fixed * (1 << this->fract)) < (p.fixed * (1 << p.fract)))
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed& p) const {
    if ((this->fixed * (1 << this->fract)) >= (p.fixed * (1 << p.fract)))
        return true;
   	else
		return false;
}

bool Fixed::operator<=(const Fixed& p) const {
    if ((this->fixed * (1 << this->fract)) <= (p.fixed * (1 << p.fract)))
        return true;
    else
		return false;
}

bool Fixed::operator==(const Fixed& p) const {
    if ((this->fixed * (1 << this->fract)) == (p.fixed * (1 << p.fract)))
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed& p) const {
    if ((this->fixed * (1 << this->fract)) != (p.fixed * (1 << p.fract)))
        return true;
    return false;
}

Fixed Fixed::operator+(const Fixed& p) const {
    Fixed result;
    result.fixed = this->fixed + p.fixed;
    return result;
}

Fixed Fixed::operator-(const Fixed& p) const {
    Fixed result;
    result.fixed = this->fixed - p.fixed;
    return result;
}

Fixed Fixed::operator*(const Fixed& p) const {
    Fixed result;
    result.fixed = (this->fixed * p.fixed) >> 8;
    return result;
}

Fixed Fixed::operator/(const Fixed& p) const {
    Fixed result;
    result.fixed = (this->fixed / p.fixed) << 8;
    return result;
}

Fixed& Fixed::operator++( void ) {
    std::cout << "Pre-increment operator called" << std::endl;
	this->fixed++;
	return (*this);
}

Fixed Fixed::operator++( int ) {
    std::cout << "Post-increment operator called" << std::endl;
	Fixed t(*this);
	this->fixed++;
	return (t);
}

Fixed& Fixed::operator--( void ) {
    std::cout << "Pre-decrement operator called" << std::endl;
	this->fixed--;
	return (*this);
}

Fixed Fixed::operator--( int ) {
    std::cout << "Post-increment operator called" << std::endl;
	Fixed t(*this);
	this->fixed--;
	return (t);
}

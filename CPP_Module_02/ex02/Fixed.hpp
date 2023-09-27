/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:41 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/28 00:56:28 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed {
  private:
    int fixed;
    static const int fract = 8;

  public:

	// ex00 Functions
	// --------------
	Fixed( void );
	~Fixed( void );
	Fixed( Fixed& p );
	Fixed( const Fixed& p );
	Fixed& operator=( Fixed& p);
	int getRawBits( void ) const;
	void setRawBits( int const raw);

	// ex01 Functions
	// --------------
	Fixed& operator=( const Fixed& p);
	Fixed (const int p);
	Fixed ( const float p);
	int  toInt ( void ) const;
	float  toFloat ( void ) const;
	friend std::ostream& operator<<(std::ostream& out, const Fixed& t);

	// ex02 Functions
	// --------------
	bool operator>(const Fixed& p) const;
	bool operator<(const Fixed& p) const;
	bool operator>=(const Fixed& p) const;
	bool operator<=(const Fixed& p) const;
	bool operator==(const Fixed& p) const;
	bool operator!=(const Fixed& p) const;
	Fixed operator+(const Fixed& p) const;
	Fixed operator-(const Fixed& p) const;
	Fixed operator*(const Fixed& p) const;
	Fixed operator/(const Fixed& p) const;
	Fixed& operator++( void );
	Fixed operator++( int );
	Fixed& operator--( void );
	Fixed operator--( int );
	static Fixed& min (Fixed& a, Fixed& b) {
		std::cout << "[Fixed] Member Min Function" << std::endl;
		return (a < b) ? a : b;
	}
	static const Fixed& min (const Fixed& a, const Fixed& b) {
		std::cout << "[Fixed] Member Const Min Function" << std::endl;
		return (a < b) ? a : b;
	}
	static Fixed& max (Fixed& a, Fixed& b) {
		std::cout << "[Fixed] Member Max Function" << std::endl;
		return (a > b) ? a : b;
	}
	static const Fixed& max (const Fixed& a, const Fixed& b) {
		std::cout << "[Fixed] Member Const Max Function" << std::endl;
		return (a > b) ? a : b;
	}
};

#endif

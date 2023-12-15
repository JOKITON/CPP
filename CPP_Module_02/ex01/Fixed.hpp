/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:41 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/15 18:13:29 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
};

std::ostream& operator<<(std::ostream& out, const Fixed& t);

#endif

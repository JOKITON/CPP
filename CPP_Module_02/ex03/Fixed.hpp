/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:41 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/08/11 11:30:39 by jaizpuru         ###   ########.fr       */
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
    Fixed( void );
    ~Fixed( void );
    Fixed( Fixed& p );
    Fixed( const Fixed& p );
    Fixed& operator=(const Fixed& p);
    int getRawBits( void ) const;
    void setRawBits( int const raw);

    // EX01
    Fixed (const int p);
    Fixed ( const float p);
    int  toInt ( void ) const;
    float  toFloat ( void ) const;
    friend std::ostream& operator<<(std::ostream& out, const Fixed& t);

    // EX02
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
      std::cout << "Min Function" << std::endl;
      return (a < b) ? a : b;
    }
    static const Fixed& min (const Fixed& a, const Fixed& b) {
      std::cout << "Const Min Function" << std::endl;
      return (a < b) ? a : b;
    }
    static Fixed& max (Fixed& a, Fixed& b) {
      std::cout << "Max Function" << std::endl;
      return (a > b) ? a : b;
    }
    static const Fixed& max (const Fixed& a, const Fixed& b) {
      std::cout << "Const Max Function" << std::endl;
      return (a > b) ? a : b;
    }
};

#endif

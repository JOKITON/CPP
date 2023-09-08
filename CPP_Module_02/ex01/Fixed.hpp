/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:41 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/08/06 13:56:14 by jaizpuru         ###   ########.fr       */
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

};

#endif

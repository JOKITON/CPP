/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:41 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/20 15:15:38 by jaizpuru         ###   ########.fr       */
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
    Fixed( void );
    ~Fixed( void );
    Fixed( Fixed& p );
    Fixed& operator=( Fixed& p );
    int getRawBits( void ) const;
    void setRawBits( int const raw );

};

#endif

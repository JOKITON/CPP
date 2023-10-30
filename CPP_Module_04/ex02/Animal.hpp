/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:02:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 18:02:17 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class Animal {
	protected:
		std::string type;
		Animal(void);

		Animal(const Animal& p);

		Animal( const std::string& type );

        public:

		virtual ~Animal(void);
		
		Animal& operator=( const Animal& p );
		
		virtual void	makeSound(void) const;
		
		std::string	getType(void) const;

		// virtual Brain&	getBrain( void ) const = 0; // (should not use except when using Brain on Animal class)
		/* Furthermore, if you make it pure, you will lose any chance of initializing Animal as an object... */
};

#endif

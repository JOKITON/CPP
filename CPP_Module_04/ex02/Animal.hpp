/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:02:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/20 18:23:34 by jaizpuru         ###   ########.fr       */
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
	public:
		Animal(const Animal& p);

		virtual ~Animal(void);
		
		Animal& operator=( const Animal& p );
		
		virtual void	makeSound(void) const;
		
		std::string	getType(void) const;

		virtual Brain&	getBrain( void ) const;
};

#endif

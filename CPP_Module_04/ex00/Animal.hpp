/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:02:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 21:26:21 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal& p);

		virtual ~Animal(void);
		
		Animal& operator=( const Animal& p );
		
		virtual void	makeSound(void) const;
		
		std::string	getType(void) const;
};

#endif

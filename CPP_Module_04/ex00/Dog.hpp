/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:25:50 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/25 17:46:56 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	private:

	public:
		Dog(void);
		Dog( const Dog& p);
	
		~Dog(void);
	
		void	makeSound(void) const;
	
		Dog&	operator=(const Dog& p);
};

#endif

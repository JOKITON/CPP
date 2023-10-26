/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:24:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/25 18:05:20 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain*	catBrain;
	public:
		Cat(void);
		Cat(const Cat & p);

		~Cat(void);
		
		Cat& operator=(Cat const & p);
		
		void	makeSound(void) const;

		Brain&	getBrain( void ) const;
};

#endif

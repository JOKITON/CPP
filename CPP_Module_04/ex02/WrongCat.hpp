/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:24:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/29 16:23:12 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	private:
	
	public:
		WrongCat(void);
		WrongCat( const WrongCat & p );
		
		~WrongCat(void);

		WrongCat&	operator=( const WrongCat& p);
		
		void	makeSound(void) const;
};

#endif

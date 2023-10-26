/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:19:08 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 18:05:35 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();

		WrongAnimal( const std::string& type );

		WrongAnimal(const WrongAnimal& p);

		~WrongAnimal();
		
		WrongAnimal& operator=( const WrongAnimal& p );
		
		std::string	getType(void) const;
		
		// virtual (To override from derived classes)
		void	makeSound(void) const;
};

#endif

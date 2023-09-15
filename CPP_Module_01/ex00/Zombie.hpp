/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:48:55 by jokin             #+#    #+#             */
/*   Updated: 2023/09/14 16:17:15 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib> 

class	Zombie {

	private:
		std::string	name;

	public:
		Zombie( void );
		~Zombie( void );
		void	announce( void );
		Zombie*	newZombie( std::string name );
		void	randomChump( std::string name);
};


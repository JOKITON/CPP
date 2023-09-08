/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:48:55 by jokin             #+#    #+#             */
/*   Updated: 2023/06/30 08:27:35 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
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
		Zombie*	newZombie( std::string& name );
		Zombie*	zombieHorde( int N, std::string& name );
		void	randomChump( std::string& name);
};

#endif


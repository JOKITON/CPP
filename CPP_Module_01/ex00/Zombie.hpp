/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:48:55 by jokin             #+#    #+#             */
/*   Updated: 2023/06/29 20:22:04 by jokin            ###   ########.fr       */
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
		Zombie*	newZombie( std::string& name );
		void	randomChump( std::string& name);
};


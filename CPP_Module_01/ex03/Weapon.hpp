/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:48:34 by jokin             #+#    #+#             */
/*   Updated: 2023/06/30 13:53:56 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	
	private:
		std::string	type;
	public:
		Weapon( void );
		Weapon(std::string type);
		~Weapon( void );
		std::string&	getType( void );
		void	setType(std::string rep);
};

#endif


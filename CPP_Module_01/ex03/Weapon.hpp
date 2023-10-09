/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:48:34 by jokin             #+#    #+#             */
/*   Updated: 2023/10/09 16:51:55 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

/**
 * @brief The Weapon class represents a type of weapon with a specific type.
 * 
 * This class encapsulates information about a weapon's type, allowing you to
 * retrieve and modify it. It includes methods to get and set the weapon type.
 */
class Weapon {
	
	private:
		std::string	type;
	public:
		Weapon( void );
		~Weapon( void );

		Weapon(std::string type);
		std::string getType( void ) const;
		void setType(std::string rep);
};


#endif


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:48:34 by jokin             #+#    #+#             */
/*   Updated: 2023/09/19 12:00:34 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

/**
 * @brief The Weapon class represents a type of weapon with a specific type.
 * 
 * This class encapsulates information about a weapon's type, allowing you to
 * retrieve and modify it. It includes methods to get and set the weapon type.
 */
class Weapon {
	
	private:
		std::string	type; // The type of weapon.
	public:
		/**
		 * @brief Construct a new Weapon object with an empty type.
		 * 
		 * The default constructor initializes the weapon type to an empty string.
		 */
		Weapon( void );

		/**
		 * @brief Construct a new Weapon object with the specified type.
		 * 
		 * @param type The type of weapon to set during construction.
		 */
		Weapon(std::string type);

		/**
		 * @brief Destroy the Weapon object.
		 * 
		 * The destructor is responsible for cleaning up resources when a Weapon
		 * object is no longer in use.
		 */
		~Weapon( void );

		/**
		 * @brief Get the type of the weapon.
		 * 
		 * @return std::string The type of the weapon as a string.
		 */
		std::string getType( void ) const;

		/**
		 * @brief Set the type of the weapon.
		 * 
		 * @param rep The new type to set for the weapon.
		 */
		void setType(std::string rep);
};


#endif


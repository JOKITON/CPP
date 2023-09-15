/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:48:34 by jokin             #+#    #+#             */
/*   Updated: 2023/09/15 12:05:52 by jaizpuru         ###   ########.fr       */
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
		std::string	getType( void ) const;
		void	setType(std::string rep);
};

#endif


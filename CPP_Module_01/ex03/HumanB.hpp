/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:51:04 by jokin             #+#    #+#             */
/*   Updated: 2023/09/15 12:10:39 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB( void );
		~HumanB( void );
		HumanB(std::string name);
		void	setWeapon(Weapon &newWeapon);
		void	attack( void );
};

#endif


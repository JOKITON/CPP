/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:51:04 by jokin             #+#    #+#             */
/*   Updated: 2023/09/21 12:49:08 by jaizpuru         ###   ########.fr       */
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
		HumanB(std::string newName);
		~HumanB( void );
		void	setWeapon(Weapon &newWeapon);
		void	attack( void );
};

#endif


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:55:56 by jokin             #+#    #+#             */
/*   Updated: 2023/09/22 17:15:51 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon) : name(newName), weapon(newWeapon) {
	// HumanA stores the reference for newWeapon, any change will be updated.
	std::cout << "[HumanA] " << name << " has been constructed!." << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "[HumanA] " << name << " has been destroyed!." << std::endl;
	return ;
}


void    HumanA::attack(void) {
	std::cout << "[HumanA] " << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return ;
}


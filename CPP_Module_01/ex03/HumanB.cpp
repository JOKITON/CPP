/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:57:56 by jokin             #+#    #+#             */
/*   Updated: 2023/09/22 17:15:22 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName) : name(newName), weapon(NULL) {
	std::cout << "[HumanB] " << name << " has been constructed!." << std::endl;
	return ;
}

HumanB::~HumanB(void) {
	std::cout << "[HumanB] " << name << " has been destroyed!." << std::endl;
	return ;
}

void	HumanB::attack(void) {
	std::cout << "[HumanB] " << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &newWeapon) {
	// Important to point to newWeapon, as changes will affect HumanB.
	weapon = &newWeapon;
	return ;
}


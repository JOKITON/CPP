/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:57:56 by jokin             #+#    #+#             */
/*   Updated: 2023/09/20 13:34:54 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(new Weapon()) {
	std::cout << "[HumanB] " << name << " has been constructed!." << std::endl;
	return ;
}

HumanB::~HumanB(void) {
	// We later free the memory associated with weapon manually.
	delete this->weapon;
	std::cout << "[HumanB] " << name << " has been destroyed!." << std::endl;
	return ;
}

void	HumanB::attack(void) {
	std::cout << "[HumanB] " << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &newWeapon) {
	this->weapon->setType(newWeapon.getType());
	return ;
}


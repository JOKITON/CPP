/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:57:56 by jokin             #+#    #+#             */
/*   Updated: 2023/09/15 12:13:09 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(void) {
	return ;
}

HumanB::~HumanB(void) {
	std::cout << "[HumanB] " << name << " has been destroyed!." << std::endl;
	return ;
}

HumanB::HumanB(std::string name) {
	this->name = name;
	std::cout << "[HumanB] " << name << " has been constructed!." << std::endl;
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


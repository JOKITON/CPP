/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:57:56 by jokin             #+#    #+#             */
/*   Updated: 2023/09/21 12:51:37 by jaizpuru         ###   ########.fr       */
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
	weapon = &newWeapon;
	return ;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:55:56 by jokin             #+#    #+#             */
/*   Updated: 2023/09/15 12:12:54 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void) {
	return ;
}

HumanA::~HumanA( void ) {
	std::cout << "[HumanA] " << name << " has been destroyed!." << std::endl;
	return ;
}

HumanA::HumanA(std::string newName, Weapon &newWeapon) {
	this->name = newName;
	std::cout << "[HumanA] " << name << " has been constructed!." << std::endl;
	this->weapon = &newWeapon;
}

void    HumanA::attack(void) {
	std::cout << "[HumanA] " << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return ;
}


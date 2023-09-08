/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:55:56 by jokin             #+#    #+#             */
/*   Updated: 2023/06/30 13:59:03 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void) {
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}

HumanA::HumanA(std::string newName, Weapon &newWeapon) {
	this->name = newName;
	this->weapon = &newWeapon;
}

void    HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return ;
}


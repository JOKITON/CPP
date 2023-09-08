/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:59:06 by jokin             #+#    #+#             */
/*   Updated: 2023/06/30 13:54:14 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	return ;
}

Weapon::Weapon(std::string type) {
	this->type = type;
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

std::string&	Weapon::getType(void) {
	return type;
}

void	Weapon::setType(std::string rep) {
	this->type = rep;
	return ;
}


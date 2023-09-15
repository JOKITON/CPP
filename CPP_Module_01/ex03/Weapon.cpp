/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:59:06 by jokin             #+#    #+#             */
/*   Updated: 2023/09/15 12:05:59 by jaizpuru         ###   ########.fr       */
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

std::string	Weapon::getType(void) const {
	return type;
}

void	Weapon::setType(std::string rep) {
	this->type = rep;
	return ;
}


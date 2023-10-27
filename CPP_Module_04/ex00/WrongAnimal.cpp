/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:19:06 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 21:45:22 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
	std::cout << "[WrongAnimal] " << type << " has been constructed!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& p) {
	this->type = p.getType();
	std::cout << "[WrongAnimal] Copy Constructor called from " << p.getType() << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "[WrongAnimal] " << type << " has been destroyed!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& p ) {
	std::cout << "[WrongAnimal] Assignment operator called for " << this->type <<  " from " << p.getType() << std::endl;
	if (this != &p)
		this->type = p.getType();
	return *this;
}

std::string	WrongAnimal::getType(void) const {
	return this->type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "[WrongAnimal] Mysterious wrong sounds*" << std::endl;
}

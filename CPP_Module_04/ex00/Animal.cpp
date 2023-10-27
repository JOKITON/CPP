/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:00:47 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 21:44:13 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("default") {
	std::cout << "[Animal] " << type << " has been constructed!" << std::endl;
}

Animal::Animal(const Animal& p) {
	std::cout << "[Animal] Copy Constructor called from " << p.getType() << std::endl;
	this->type = p.type;
}

Animal::~Animal(void) {
	std::cout << "[Animal] " << type << " has been destroyed!" << std::endl;
}

Animal& Animal::operator=( const Animal& p ) {
	std::cout << "[Animal] Assignment operator called for " << this->type << " from " << p.getType() << std::endl;
	if (this != &p)
		this->type = p.getType();
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "[Animal] Mysterious sounds*" << std::endl;
}

std::string	Animal::getType(void) const {
	return this->type;
}

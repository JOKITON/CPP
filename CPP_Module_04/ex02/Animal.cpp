/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:00:47 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 18:03:05 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("default") {
	std::cout << "[Animal] " << type << " has been constructed!" << std::endl;
	return ;
}

Animal::Animal( const std::string& type ) {
	std::cout << "[Animal] " << type << " has been constructed." << std::endl;
	this->type = type;
}

Animal::Animal(const Animal& p) : type(p.getType()) {
	std::cout << "[Animal] Copy Constructor Called!" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "[Animal] " << type << " has been destroyed!" << std::endl;
	return ;
}

Animal& Animal::operator=( const Animal& p ) {
	std::cout << "[Animal] Assignment operator called!" << std::endl;
	if (this != &p)
		this->type = p.getType();
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << "[Animal] Mysterious sounds*" << std::endl;
}

std::string	Animal::getType(void) const {
	return this->type;
}

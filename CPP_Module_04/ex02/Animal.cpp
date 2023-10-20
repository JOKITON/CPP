/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:00:47 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/20 18:13:30 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("default") {
	std::cout << "[Animal] " << type << " has been constructed!" << std::endl;
	return ;
}

Animal::Animal(const Animal& p) {
	std::cout << "[Animal] Copy Constructor Called!" << std::endl;
	*this = p; // deep copy, not necessary
}

Animal::~Animal(void) {
	std::cout << "[Animal] " << type << " has been destroyed!" << std::endl;
	return ;
}

Animal& Animal::operator=( const Animal& p ) {
	std::cout << "[Animal] Assignment operator called!" << std::endl;
	if (this == &p)
		return *this;
	*this = p;
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "[Animal] Mysterious sounds*" << std::endl;
}

std::string	Animal::getType(void) const {
	return this->type;
}

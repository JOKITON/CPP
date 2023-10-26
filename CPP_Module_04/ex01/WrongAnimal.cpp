/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:19:06 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 15:27:51 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("wrong_default") {
	std::cout << "[WrongAnimal] " << type << " has been constructed!" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& p) {
	std::cout << "[WrongAnimal] Copy Constructor Called!" << std::endl;
	this->type = p.getType();
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "[WrongAnimal] " << type << " has been destroyed!" << std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& p ) {
	if (this != &p)
		this->type = p.getType();
	std::cout << "[WrongAnimal] Assignment operator called!" << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType(void) const {
	return this->type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "[WrongAnimal] Mysterious wrong sounds*" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:26:02 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 21:45:11 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "[Dog] " << this->getType() << " has been constructed!" << std::endl;
}

Dog::~Dog() {
	std::cout << "[Dog] " << this->getType() << " has been destroyed!" << std::endl;
}

Dog::Dog( const Dog & p) : Animal(p) {
	std::cout << "[Dog] Copy Constructor called from " << p.getType() << std::endl;
	this->type = p.getType();
}

void	Dog::makeSound(void) const { // 
	std::cout << "[Dog] Wooooof" << std::endl;
}


Dog&	Dog::operator=(const Dog& p) {
	std::cout << "[Dog] Assignment operator called for " << this->type << " from " << p.getType() << std::endl;
	if (this != &p)
		this->type = p.getType();
	return *this;
}

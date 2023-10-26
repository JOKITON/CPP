/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:26:02 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 18:03:28 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), dogBrain(new Brain()) {
	std::cout << "[Dog] " << this->getType() << " has been constructed!" << std::endl;
	return ;
}

Dog::~Dog() {
	delete this->dogBrain;
	std::cout << "[Dog] " << this->getType() << " has been destroyed!" << std::endl;
	return ;
}

Dog::Dog( const Dog & p) : Animal(p), dogBrain(new Brain(p.getBrain())) {
	this->type = p.getType();
	std::cout << "[Dog] Copy Constructor called for " << this->type << std::endl;
	return ;
}

void	Dog::makeSound(void) const { // 
	std::cout << "[Dog] Wooooof" << std::endl;
	return ;
}


Dog&	Dog::operator=(const Dog& p) {
	std::cout << "[Dog] Assigment Operator called for " << this->type << " from " << p.getType() << std::endl;
	if (this != &p) {
		// Copy data members from p to *this
		this->type = p.getType();
		delete this->dogBrain;
		this->dogBrain = new Brain(p.getBrain());
	}
	return *this;
}

Brain&	Dog::getBrain( void ) const {
	return (*this->dogBrain);
}

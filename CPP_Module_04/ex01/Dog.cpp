/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:26:02 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/02 18:52:43 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "[Dog] " << this->getType() << " has been constructed!" << std::endl;
	return ;
}

Dog::~Dog() {
	std::cout << "[Dog] " << this->getType() << " has been destroyed!" << std::endl;
	return ;
}

Dog::Dog( const Dog & p) : Animal() {
	this->type = p.getType();
	std::cout << "[Dog] has been constructed (Copy) " << std::endl;
	return ;
}

void	Dog::makeSound(void) const { // 
	std::cout << "[Dog] Wooooof" << std::endl;
	return ;
}


Dog&	Dog::operator=(const Dog& p) {
	this->type = p.type;
	return *this;
}

Brain*	Dog::getBrain( void ) {
	return (this->dogBrain);
}

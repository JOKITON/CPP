/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:00:47 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 11:55:21 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("default") {
	std::cout << "[Animal] " << type << " has been constructed!" << std::endl;
	return ;
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

/* Brain&	Animal::getBrain( void ) const { // check description on header file
	std::cout << "[Animal] Since Animal cannot have any pure functions (without code), I had to declare this function..." << std::endl;
	std::cout << "[Animal] Please, free the returning pointer to the Brain object!" << std::endl;

	Brain	*ret = new Brain();

	return (*ret);
} */

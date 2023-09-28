/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:00:47 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/28 02:43:47 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal") {
	std::cout << "[Animal] " << type << " has been constructed!" << std::endl;
	return ;
}

Animal::Animal(std::string animal) {
	this->type = animal;
	std::cout << "[Animal] " << animal << " has been constructed!" << std::endl;
	return ;
}

Animal::~Animal(void) {
	std::cout << "[Animal]" << type << " has been destroyed!" << std::endl;
	return ;
}

Animal::Animal(const Animal& p) {
	std::cout << "[Animal] Copy Constructor Called!" << std::endl;
	*this = p;
}

Animal& Animal::operator=( const Animal* p ) {
	std::cout << "[Animal] Assignment operator called!" << std::endl;
	this->type = p->type;
	return (*this);
}

std::string	Animal::getType(void) const {
	return this->type;
}

void	Animal::makeSound(void) const {
	if (this->type == "Cat")
		std::cout << "[Cat] Meooooow!" << std::endl;
	else if (type == "Dog")
		std::cout << "[Dog] Woooooof!" << std::endl;
	else
		std::cout << "[Animal] Mysterious sounds*" << std::endl;
}

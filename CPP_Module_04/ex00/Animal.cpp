/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:00:47 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/11 19:43:46 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal") { // Default Constructor
	std::cout << "[Animal] " << type << " has been constructed!" << std::endl;
	return ;
}

Animal::Animal(std::string animal) { // String-Integrated Constructor
	this->type = animal;
	std::cout << "[Animal] " << animal << " has been constructed!" << std::endl;
	return ;
}

Animal::~Animal(void) { // Destructor
	std::cout << "[Animal]" << type << " has been destroyed!" << std::endl;
	return ;
}

Animal::Animal(const Animal& p) { // Non-used Copy-Constructor
	std::cout << "[Animal] Copy Constructor Called!" << std::endl;
	*this = p;
}

Animal& Animal::operator=( const Animal* p ) { // Assigment operator
	std::cout << "[Animal] Assignment operator called!" << std::endl;
	this->type = p->type;
	return (*this);
}

std::string	Animal::getType(void) const { // Returns the type of the Animal
	return this->type;
}

void	Animal::makeSound(void) const { // Depending on the Animal, a sound is displayed
	if (this->type == "Cat")
		std::cout << "[Cat] Meooooow!" << std::endl;
	else if (type == "Dog")
		std::cout << "[Dog] Woooooof!" << std::endl;
	else
		std::cout << "[Animal] Mysterious sounds*" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:50:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 21:44:57 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
	std::cout << "[Cat] " << this->getType() << " has been constructed!" << std::endl;
}

Cat::Cat( const Cat & p) : Animal(p) {
	this->type = p.getType();
	std::cout << "[Cat] Copy Constructor called from " << p.getType() << std::endl;
}

Cat::~Cat(void) {
	std::cout << "[Cat] " << this->getType() << " has been destroyed!" << std::endl;
}

Cat&	Cat::operator=(Cat const & p) {
	std::cout << "[Cat] Assignment operator called for " << this->type << " from " << p.getType() << std::endl;
	if (this != &p)
		this->type = p.getType();
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "[Cat] Meowwwww" << std::endl;
}

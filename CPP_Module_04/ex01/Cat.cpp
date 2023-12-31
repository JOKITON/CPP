/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:50:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/27 10:59:21 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : catBrain(new Brain()) {
	this->type = "Cat";
	std::cout << "[Cat] " << this->getType() << " has been constructed!" << std::endl;
	return ;
}

Cat::Cat( const Cat & p) : Animal(p), catBrain(new Brain(p.getBrain())) {
	std::cout << "[Cat] Copy Constructor called from " << p.getType() << std::endl;
	this->type = p.getType();
	return ;
}

Cat::~Cat(void) {
	delete this->catBrain;
	std::cout << "[Cat] " << "has been destroyed!" << std::endl;
	return ;
}

Cat&	Cat::operator=(Cat const & p) {
	std::cout << "[Cat] Assignment operator called for " << this->type << " from " << p.getType() << std::endl;
	if (this != &p) {
        // Copy data members from p to *this
		this->type = p.getType();
		delete this->catBrain;
		this->catBrain = new Brain(p.getBrain());
    }
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "[Cat] Meowwwww" << std::endl;
	return ;
}

Brain&	Cat::getBrain( void ) const {
	return (*this->catBrain);
}

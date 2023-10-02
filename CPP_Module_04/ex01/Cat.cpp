/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:50:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/02 18:52:23 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
	std::cout << "[Cat] " << this->getType() << " has been constructed!" << std::endl;
	return ;
}

Cat::Cat( const Cat & p) : Animal() {
	*this = p;
	std::cout << "[Cat] has been constructed (Copy) " << std::endl;
	return ;
}

Cat::~Cat(void) {
	std::cout << "[Cat] " << "has been destroyed!" << std::endl;
	return ;
}

Cat&	Cat::operator=(Cat const & p) {
	this->type = p.type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "[Cat] Meowwwww" << std::endl;
	return ;
}

Brain*	Cat::getBrain( void ) {
	return (this->catBrain);
}

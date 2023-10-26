/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:52:12 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 17:06:35 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : type("cure") {
	std::cout << "[Cure] has been constructed." << std::endl;
}

Cure::Cure( const Cure& p ) : AMateria() {
	std::cout << "[Cure] Copy constructor called from " << p.getType() << std::endl;
	this->type = p.getType();
}

Cure& Cure::operator=( const Cure &p ) {
	std::cout << "[Cure] Assigment operator called from " << this->type << " from " << p.getType() << std::endl;
	
	this->type = p.getType();

   return (*this);
}

Cure::~Cure( void ) {
	std::cout << "[Cure] has been destroyed." << std::endl;
}

void	Cure::use( ICharacter& p) {
	std::cout << "[Cure] * heals " << p.getName() << "'s wounds *" << std::endl;
}

Cure*	Cure::clone( void ) const {
	Cure*	cp = new Cure();

	return cp;
}

std::string const & Cure::getType( void ) const {
	return this->type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:52:12 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/17 18:07:58 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : type("cure") {
	std::cout << "[Cure] has been constructed." << std::endl;
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

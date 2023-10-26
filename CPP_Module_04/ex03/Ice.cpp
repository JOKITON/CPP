/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:48:53 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 17:08:28 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : type("ice") {
	std::cout << "[Ice] has been constructed." << std::endl;
}

Ice::Ice( const Ice& p ) : AMateria() {
	std::cout << "[Ice] Copy constructor called from " << p.getType() << std::endl;
	this->type = p.getType();
}

Ice& Ice::operator=( const Ice& p ) {
    std::cout << "[Ice] Assigment operator called from " << this->type << " from " << p.getType() << std::endl;
	
	this->type = p.getType();

	return (*this);
}

Ice::~Ice( void ) {
	std::cout << "[Ice] has been destroyed." << std::endl;
}

Ice*	Ice::clone( void ) const {
	Ice	*ret = new Ice();
	
	return ret;
}

void	Ice::use(ICharacter& p) {
	std::cout << "[Ice] * shoots an ice bolt at " << p.getName() << " *" << std::endl;
}

std::string const & Ice::getType( void ) const {
	return this->type;
}

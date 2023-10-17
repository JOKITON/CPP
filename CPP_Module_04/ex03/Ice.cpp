/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:48:53 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/17 18:07:25 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : type("ice") {
	std::cout << "[Ice] has been constructed." << std::endl;
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
